// Copyright 2023 Hagn Maximilian
// Created by maximilian on 28.03.23.
//

#ifndef REPROMPI_DEV_PRIVATE_CONSTANTS_H
#define REPROMPI_DEV_PRIVATE_CONSTANTS_H

#include <vector>
#include <string>

namespace CONSTANTS {

  constexpr double NO_BARRIER_TIME_VALUE = -1.0;
  const std::vector <std::string> COMPARER_NAMES = {"simple",
                                                    "abs_runtime",
                                                    "rel_runtime",
                                                    "violation",
                                                    "detailed_violation",
                                                    "grouped_violation",
                                                    "raw"};
}


#endif //REPROMPI_DEV_PRIVATE_CONSTANTS_H
