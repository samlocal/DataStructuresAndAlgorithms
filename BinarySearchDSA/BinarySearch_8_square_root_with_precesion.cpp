/*
double moreprecesion(int n, int precesion , int tempSol)
{
    double factor=1;
    double ans=tempsol;

    for(int i=0;i<presecion;i++)
    {
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
*/