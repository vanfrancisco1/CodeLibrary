fun main()
{
  var sum: Int = 0;
  //print("Input lower: ");
  var lower = Integer.valueOf(readLine());
  //print("Input higher: ");
  var higher = Integer.valueOf(readLine());
  if (lower > higher || lower < 0)
  {
    println("Invalid");
  }
  else
  {
    while(lower <= higher)
    {
      sum += lower;
      lower++;
    }
    print(sum);
  }
}
