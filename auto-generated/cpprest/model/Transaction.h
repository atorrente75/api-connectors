/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Transaction.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Transaction_H_
#define IO_SWAGGER_CLIENT_MODEL_Transaction_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Transaction
    : public ModelBase
{
public:
    Transaction();
    virtual ~Transaction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Transaction members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTransactID() const;
        void setTransactID(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();
    void setAccount(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();
    void setCurrency(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTransactType() const;
    bool transactTypeIsSet() const;
    void unsetTransactType();
    void setTransactType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getAmount() const;
    bool amountIsSet() const;
    void unsetAmount();
    void setAmount(double value);
    /// <summary>
    /// 
    /// </summary>
    double getFee() const;
    bool feeIsSet() const;
    void unsetFee();
    void setFee(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTransactStatus() const;
    bool transactStatusIsSet() const;
    void unsetTransactStatus();
    void setTransactStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();
    void setAddress(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTx() const;
    bool txIsSet() const;
    void unsetTx();
    void setTx(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getText() const;
    bool textIsSet() const;
    void unsetText();
    void setText(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTransactTime() const;
    bool transactTimeIsSet() const;
    void unsetTransactTime();
    void setTransactTime(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(utility::datetime value);

protected:
    utility::string_t m_TransactID;
        double m_Account;
    bool m_AccountIsSet;
    utility::string_t m_Currency;
    bool m_CurrencyIsSet;
    utility::string_t m_TransactType;
    bool m_TransactTypeIsSet;
    double m_Amount;
    bool m_AmountIsSet;
    double m_Fee;
    bool m_FeeIsSet;
    utility::string_t m_TransactStatus;
    bool m_TransactStatusIsSet;
    utility::string_t m_Address;
    bool m_AddressIsSet;
    utility::string_t m_Tx;
    bool m_TxIsSet;
    utility::string_t m_Text;
    bool m_TextIsSet;
    utility::datetime m_TransactTime;
    bool m_TransactTimeIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Transaction_H_ */