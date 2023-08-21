#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50
#define MAX_NAME 50
#define MAX_PRICE 9999

struct item {
  char name[MAX_NAME + 1];
  int price;
};

struct bill {
  struct item items[MAX_ITEMS];
  int num_items;
  int total;
};

void init_bill(struct bill *b) {
  b->num_items = 0;
  b->total = 0;
}

void add_item(struct bill *b, char *name, int price) {
  if (b->num_items == MAX_ITEMS) {
    printf("Error: Cannot add more items to the bill.\n");
    return;
  }
  if (price > MAX_PRICE) {
    printf("Error: Invalid price for item '%s'.\n", name);
    return;
  }
  strncpy(b->items[b->num_items].name, name, MAX_NAME);
  b->items[b->num_items].price = price;
  b->num_items++;
  b->total += price;
}

void print_bill(struct bill *b) {
  printf("Bill:\n");
  for (int i = 0; i < b->num_items; i++) {
    printf("  %s: $%d\n", b->items[i].name, b->items[i].price);
  }
  printf("Total: $%d\n", b->total);
}

int main(int argc, char **argv) {
  struct bill my_bill;
  init_bill(&my_bill);

  add_item(&my_bill, "Hamburger", 10);
  add_item(&my_bill, "Fries", 5);
  add_item(&my_bill, "Soda", 2);

  print_bill(&my_bill);
  return 0;
}
