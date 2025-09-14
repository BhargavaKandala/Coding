int buyChoco(int* prices, int pricesSize, int money){
        for(int i = 0; i < pricesSize - 1; i++){
            for(int j = 0; j < pricesSize - 1; j++){
                if(prices[j] > prices[j+1]){
                    int temp = prices[j];
                    prices[j] = prices[j+1];
                    prices[j+1] = temp;
                }
            }
        }

        int prices_of_both = prices[0] + prices[1];
        if(prices_of_both <= money){
            return money - prices_of_both;
        }else {
        return money;
        }

}