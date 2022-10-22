 #include <math.h>
double mathwaiting(double arr[], int n)
{
  double sum = 0;
  for (int i = 1; i <= n; i++)
  {
  sum += arr[i];
  }
return (sum/n);
}
 double dispertion(double arr[], int n , double m )
{
	double dsum = 0;
    for (int i = 1; i <= n; i++)
    {
    dsum += pow((arr[i] - m), 2);
    }
return (dsum/n);
 }