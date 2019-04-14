#include <stdio.h>

int main()
{

int n,
    m,
    tabuleiro[20][20][1] = { {0},{0},{0} };

int register
     v,
     g,
     h,
     pulosmax = 0;

while( 1 )
{

g = 0;

pulosmax = 0;

scanf("%d %d",&n,&m);

if ( n == 0 && (m == 0) )
{
    return 0;
}

int maior ( int i , int j )
{

int ma = 0,
    v2;

        if( ( i - 2 ) >= 0 && ( j + 2 ) >= 0 && ( i - 2 ) < n && ( j + 2 ) < m && ( tabuleiro[ i - 2 ][ j + 2 ][ 0 ] == 0 ) && ( tabuleiro[ i - 1 ][ j + 1 ][ 1 ] == 0 ) && ( tabuleiro[ i - 1 ][ j + 1 ][ 0 ] == 2 ) )
        {
            tabuleiro[ i - 1 ][ j + 1 ][ 1 ] = 1;

            v2 = maior( i - 2 , j + 2 ) + 1;

            if ( v2 > ma )
            {
                ma = v2;
            }

            tabuleiro[ i - 1 ][ j + 1 ][ 1 ] = 0;
        }
        if( ( i + 2 ) >= 0 && ( j + 2 ) >= 0 && ( i + 2 ) < n && ( j + 2 ) < m && ( tabuleiro[ i + 2 ][ j + 2 ][ 0 ] == 0 ) && ( tabuleiro[ i + 1 ][ j + 1 ][ 1 ] == 0 ) && ( tabuleiro[ i + 1 ][ j + 1 ][ 0 ] == 2 ) )
        {
            tabuleiro[ i + 1 ][ j + 1 ][ 1 ] = 1;

            v2 = maior( i + 2 , j + 2 ) + 1;

            if ( v2 > ma )
            {
                ma = v2;
            }

            tabuleiro[ i + 1 ][ j + 1 ][ 1 ] = 0;
        }
        if( ( i + 2 ) >= 0 && ( j - 2 ) >= 0 && ( i + 2 ) < n && ( j - 2 ) < m && ( tabuleiro[ i + 2 ][ j - 2 ][ 0 ] == 0 ) && ( tabuleiro[ i + 1 ][ j - 1 ][ 1 ] == 0 ) && ( tabuleiro[ i + 1 ][ j - 1 ][ 0 ] == 2 ) )
        {
            tabuleiro[ i + 1 ][ j - 1 ][ 1 ] = 1;

            v2 = maior( i + 2 , j - 2 ) + 1;

            if ( v2 > ma )
            {
                ma = v2;
            }

            tabuleiro[ i + 1 ][ j - 1 ][ 1 ] = 0;
        }
        if( ( i - 2 ) >= 0 && ( j - 2 ) >= 0 && ( i - 2 ) < n && ( j - 2 ) < m && ( tabuleiro[ i - 2 ][ j - 2 ][ 0 ] == 0 ) && ( tabuleiro[ i - 1 ][ j - 1 ][ 1 ] == 0 ) && ( tabuleiro[ i - 1 ][ j - 1 ][ 0 ] == 2 ) )
        {
            tabuleiro[ i - 1 ][ j - 1 ][ 1 ] = 1;

            v2 = maior( i - 2 , j - 2 ) + 1;

            if ( v2 > ma )
            {
                ma = v2;
            }

            tabuleiro[ i - 1 ][ j - 1 ][ 1 ] = 0;
        }

return ma;

}

while ( g < n )
{

    h = 0;

    while ( h < m )
    {

        if ( ( ( g % 2 == 0 ) && ( h % 2 == 0 ) ) || ( ( g % 2 != 0 ) && ( h % 2 != 0 ) ) )
        {
            scanf("%d", &tabuleiro[g][h][0] );
        }

        h++;
    }

    g++;
}

g = 0;

while( g < n )
{
    h = 0;

    while ( h < m )
    {
        {
            if ( tabuleiro[g][h][0] == 1 )
            {
                tabuleiro[g][h][0] = 0;

                v = maior ( g , h );

                if ( v > pulosmax )
                {
                    pulosmax = v;
                }

                tabuleiro[g][h][0] = 1;

            }

        }

        h++;
    }

    g++;
}

printf("%d\n",pulosmax);

}


return 0;

}


