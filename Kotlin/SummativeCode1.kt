import java.util.Collections;
fun main(){
  var i = 0;
  val ArrList = ArrayList<String>();
  var MyWord = readLine().toString();
  var letters = MyWord.split("")
  var reverse = "";
  for (i in letters)
  {
    ArrList.add(i);
  }
  Collections.reverse(ArrList);
  for (i in ArrList)
  {
    reverse += i;
  }
  if (MyWord.toLowerCase() == reverse.toLowerCase())
  {
    println("\"$MyWord\" is a palindrome")
  }
  else
  {
    println("\"$MyWord\" is not a palindrome");
  }
}
