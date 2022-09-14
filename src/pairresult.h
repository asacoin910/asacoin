// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2022 The Asa Coin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ASA_PAIRRESULT_H
#define ASA_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //ASA_PAIRRESULT_H
