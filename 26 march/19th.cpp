#include &lt;iostream&gt;
class DecimalToBinary
{
public:
int decimalNumber;
long long binaryNumber;
DecimalToBinary(int num) : decimalNumber(num), binaryNumber(0)
{
convertToBinary();
}
void convertToBinary()
{
long long tempBinary = 0, multiplier = 1;
while (decimalNumber &gt; 0)

{

tempBinary += (decimalNumber % 2) * multiplier;
decimalNumber /= 2;
multiplier *= 10;
}
binaryNumber = tempBinary;
}
void displayBinary() const
{
std::cout &lt;&lt; &quot;Binary equivalent: &quot; &lt;&lt; binaryNumber &lt;&lt; std::endl;
}

};
int main()
{
int decimalNum;
std::cout &lt;&lt; &quot;Enter a decimal number: &quot;;
std::cin &gt;&gt; decimalNum;
DecimalToBinary converter(decimalNum);
converter.displayBinary();
return 0;
}
