#include <iostream>

int main()
{

    const int num = 1;
    
    std::cout << "\n\nThe multiplication tables are as follows:\n\n";
    
      for (int i = 1; i < 11; i++)
      {
          
          std::cout << num << " x " << i << " = " << (num * i) << "\t";
          std::cout << num + 2 << " x " << i << " = " << (num + 2) * i << "\t";
          std::cout << num + 4 << " x " << i << " = " << (num + 4) * i << "\n";
          
      }
      
      return 0;
    
}
