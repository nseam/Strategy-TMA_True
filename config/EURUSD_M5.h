/*
 * @file
 * Defines strategy's and indicator's default parameter values
 * for the given pair symbol and timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_TMA_True_Params_M5 : Indi_TMA_True_Params {
  Indi_TMA_True_Params_M5() : Indi_TMA_True_Params(indi_tmat_defaults, PERIOD_M5) { shift = 0; }
} indi_tmat_m5;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_TMA_True_Params_M5 : StgParams {
  // Struct constructor.
  Stg_TMA_True_Params_M5() : StgParams(stg_tmat_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = (float)0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = (float)0;
    price_stop_method = 0;
    price_stop_level = (float)2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_tmat_m5;
