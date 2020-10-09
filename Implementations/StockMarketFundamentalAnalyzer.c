#include <stdio.h>


/**
 * Function declarations for stock market fundamental calculator
 */
float dividendYieldRatio(float d, float f);
float EPS(float n, float p, float o);
float debtToEquity(float l, float s);
float priceToEquity(float m, float e);
float profitOrLoss(float b, float se, int q);



int main()
{
    char ch;
    int q;
    float d,f,n,p,o,l,s,m,e,b,se;

    /* Print welcome message */
    printf("WELCOME TO STOCK MARKET FUNDAMENTAL CALCULATOR\n");
    printf("-------------------------------------\n");
    printf("1. Dividend Yield Ratio\n2. EPS(Earnings Per Share)\n3. Debt to Equity Ratio\n4. Price into Equity Ratio\n5. Profit/Loss\n");
    printf("Choose operation to perform (1,2,3,4,5): ");

    /* Input operation from user */
    scanf("%c", &ch);

    switch(ch)
    {

        case '1':
            dividendYieldRatio(d,f);
            break;

        case '2':
            EPS(n,p,o);
            break;

        case '3':
            debtToEquity(l,s);
            break;

        case '4':
            priceToEquity(m,e);
            break;

        case '5':
            profitOrLoss(b,se,q);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}


/**
 * Function to find dividend and dividend yield in percentage
 */
float dividendYieldRatio(float d, float f)
{
    printf("Enter the Cash dividend per share\n");
    scanf("%f",&d);
    printf("Enter the face value of the share\n");
    scanf("%f",&f);
    float dividends=(d/f)*100;
    float dividendYield=(d/dividends)*100;
    printf("Dividend and Dividend Yield in percentage is: \n%f\n%f", dividends, dividendYield);
}

/**
 * Function to find earnings per share
 */
float EPS(float n, float p, float o)
{
    printf("Enter the net income of the share\n");
    scanf("%f",&n);
    printf("Enter the preferred dividends\n");
    scanf("%f",&p);
    printf("Enter the average outstanding common shares\n"); scanf("%f",&o);
    float EPSs=(n-p)/o;
    printf("Earnings per Share is: %f", EPSs);
}

/**
 * Function to find debt-to-equity ratio
 */
float debtToEquity(float l, float s)
{
    printf("Enter the total liabilities\n");
    scanf("%f",&l);
    printf("Enter the total shareholders equity\n");
    scanf("%f",&s);
    float debts=l/s;
    printf("Debt-to-Equity Ratio is: %f", debts);
}

/**
 * Function to find price-to-equity ratio
 */
float priceToEquity(float m, float e)
{
    printf("Enter the market value per share\n");
    scanf("%f",&m);
    printf("Enter the EPS\n");
    scanf("%f",&e);
    float prices=m/e;
    printf("Price-to-Equity Ratio is: %f", prices);
}

/**
 * Function to find Profit or Loss
 */
float profitOrLoss(float b, float se, int q)
{
    printf("Enter the Buy Price\n"); scanf("%f",&b);
    printf("Enter the Sell Price\n"); scanf("%f",&se);
    printf("Enter the Quantity\n"); scanf("%d",&q);
    float pl=(se-b)*q;
    if(pl<0) {
        printf("Loss is: %f", pl);
    }
    else if(pl>0) {
        printf("Profit is: %f", pl);
    }
    else {
        printf("Neither profit nor Loss");
    }
}

