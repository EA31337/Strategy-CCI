/**
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_CCI_Params_M1 : IndiCCIParams {
  Indi_CCI_Params_M1() : IndiCCIParams(indi_cci_defaults, PERIOD_M1) {
    applied_price = (ENUM_APPLIED_PRICE)0;
    period = 2;
    shift = 0;
  }
} indi_cci_m1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_CCI_Params_M1 : StgParams {
  // Struct constructor.
  Stg_CCI_Params_M1() : StgParams(stg_cci_defaults) {
    lot_size = 0;
    signal_open_method = 2;
    signal_open_level = (float)20.0;
    signal_open_boost = 0;
    signal_close_method = 2;
    signal_close_level = (float)0;
    price_profit_method = 60;
    price_profit_level = (float)6;
    price_stop_method = 60;
    price_stop_level = (float)6;
    tick_filter_method = 32;
    max_spread = 0;
  }
} stg_cci_m1;
