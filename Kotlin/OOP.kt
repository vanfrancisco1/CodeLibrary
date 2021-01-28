
fun main() 
{
  var Item1 = StoreItems();
  Item1.SetItemName("Dragon Potion");
  Item1.SetItemPrice(1200.0);
  println("Welcome to Van's Potion Shop");
  println("Choose an Item to buy: ");
  println("A. " + Item1.GetItemName() + " --- " + Item1.GetItemPrice());
  println("Welcome to Van's Potion Shop");
  println("Welcome to Van's Potion Shop");
  println("Welcome to Van's Potion Shop");
}
class StoreItems()
{
  var ItemName:String = " ";
  var ItemPrice:Double = 0.0;
  fun SetItemPrice(Price:Double)
  {
    this.ItemPrice = Price
  }
  fun SetItemName(Name:String)
  {
    this.ItemName = Name;
  }
  fun GetItemName():String
  {
    return ItemName;
  }
  fun GetItemPrice():Double
  {
    return ItemPrice;
  }
  
}
class PersonIdent()
{
  var Name:String = " ";
  fun SetName(Name:String)
  {
    this.Name = Name;
  }
  fun GetName():String
  {
   return Name; 
  }
}