fun main()
{
 var Input:String = readLine().toString();
 var numbers = Input.map{it.toString().toInt()}.toIntArray();
 var sum = 0;
 var ave:Double;
 
 for(i in numbers)
  {
    sum += i;
  }
 ave = sum.toDouble() / numbers.size;
 print("$sum ");
 print(String.format("%.2f",ave));
}
