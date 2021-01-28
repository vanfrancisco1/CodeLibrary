import java.util.Collections;
fun main()
{
 val ArrList = ArrayList<String>();
 var Input:String = readLine().toString();
 var letters = Input.split("");
 var i = 0;
 for(i in letters)
  {
    ArrList.add(i);
  }
  Collections.sort(ArrList);
  while (i < ArrList.size)
  {
    print(ArrList.get(i));
    i++;
  }
}
