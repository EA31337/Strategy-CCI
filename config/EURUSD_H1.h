/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_CCI_Params_H1 : CCIParams {
  Indi_CCI_Params_H1() : CCIParams(indi_cci_defaults, PERIOD_H1) {
    applied_price = (ENUM_APPLIED_PRICE)0;
    period = 12;
    shift = 0;
  }
} indi_cci_h1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_CCI_Params_H1 : StgParams {
  // Struct constructor.
  Stg_CCI_Params_H1() : StgParams(stg_cci_defaults) {
    lot_size = 0;
    signal_open_method = 64;
    signal_open_filter = 32;
    signal_open_level = (float)20;
    signal_open_boost = 0;
    signal_close_method = 64;
    signal_close_level = (float)20;
    price_stop_method = 0;
    price_stop_level = (float)2;
    tick_filter_method = 32;
    max_spread = 0;
  }
} stg_cci_h1;
