/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * WalletTransactionResource.h
 *
 * 
 */

#ifndef WalletTransactionResource_H_
#define WalletTransactionResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  WalletTransactionResource
    : public ModelBase
{
public:
    WalletTransactionResource();
    virtual ~WalletTransactionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WalletTransactionResource members

    /// <summary>
    /// The new balance of the wallet after the transaction
    /// </summary>
    double getBalance() const;
    void setBalance(double value);
    bool balanceIsSet() const;
    void unsetBalance();
    /// <summary>
    /// The unix timestamp in seconds of the transaction
    /// </summary>
    int64_t getCreateDate() const;
    void setCreateDate(int64_t value);
    bool create_dateIsSet() const;
    void unsetCreate_date();
    /// <summary>
    /// The code of the currency for the transaction
    /// </summary>
    utility::string_t getCurrencyCode() const;
    void setCurrencyCode(utility::string_t value);
    bool currency_codeIsSet() const;
    void unsetCurrency_code();
    /// <summary>
    /// The specific details of the transaction, such as a message from the admin that created it
    /// </summary>
    utility::string_t getDetails() const;
    void setDetails(utility::string_t value);
    bool detailsIsSet() const;
    void unsetDetails();
    /// <summary>
    /// The id of the transaction
    /// </summary>
    int32_t getId() const;
    void setId(int32_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The id of the invoice that spawned the transaction, if any
    /// </summary>
    int32_t getInvoiceId() const;
    void setInvoiceId(int32_t value);
    bool invoice_idIsSet() const;
    void unsetInvoice_id();
    /// <summary>
    /// Whether the transaction has been refunded
    /// </summary>
    bool getIsRefunded() const;
    void setIsRefunded(bool value);
    bool is_refundedIsSet() const;
    void unsetIs_refunded();
    /// <summary>
    /// The response
    /// </summary>
    utility::string_t getResponse() const;
    void setResponse(utility::string_t value);
    bool responseIsSet() const;
    void unsetResponse();
    /// <summary>
    /// The root source of the transaction
    /// </summary>
    utility::string_t getSource() const;
    void setSource(utility::string_t value);
    bool sourceIsSet() const;
    void unsetSource();
    /// <summary>
    /// If the transaction was successful
    /// </summary>
    bool getSuccessful() const;
    void setSuccessful(bool value);
    bool successfulIsSet() const;
    void unsetSuccessful();
    /// <summary>
    /// The payment gateway (external) transaction ID
    /// </summary>
    utility::string_t getTransactionId() const;
    void setTransactionId(utility::string_t value);
    bool transaction_idIsSet() const;
    void unsetTransaction_id();
    /// <summary>
    /// The general type of the transaction
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// The table name of the subclass
    /// </summary>
    utility::string_t getTypeHint() const;
    void setTypeHint(utility::string_t value);
    bool type_hintIsSet() const;
    void unsetType_hint();
    /// <summary>
    /// The owner of the wallet
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
    void setUser(std::shared_ptr<SimpleUserResource> value);
    bool userIsSet() const;
    void unsetUser();
    /// <summary>
    /// The amount of the transaction, positive if a gain, negative if an expenditure
    /// </summary>
    double getValue() const;
    void setValue(double value);
    bool valueIsSet() const;
    void unsetValue();
    /// <summary>
    /// The id of the wallet this transaction affected
    /// </summary>
    int32_t getWalletId() const;
    void setWalletId(int32_t value);
    bool wallet_idIsSet() const;
    void unsetWallet_id();

protected:
    double m_Balance;
    bool m_BalanceIsSet;
int64_t m_Create_date;
    bool m_Create_dateIsSet;
utility::string_t m_Currency_code;
    bool m_Currency_codeIsSet;
utility::string_t m_Details;
    bool m_DetailsIsSet;
int32_t m_Id;
    bool m_IdIsSet;
int32_t m_Invoice_id;
    bool m_Invoice_idIsSet;
bool m_Is_refunded;
    bool m_Is_refundedIsSet;
utility::string_t m_Response;
    bool m_ResponseIsSet;
utility::string_t m_Source;
    bool m_SourceIsSet;
bool m_Successful;
    bool m_SuccessfulIsSet;
utility::string_t m_Transaction_id;
    bool m_Transaction_idIsSet;
utility::string_t m_Type;
    bool m_TypeIsSet;
utility::string_t m_Type_hint;
    bool m_Type_hintIsSet;
std::shared_ptr<SimpleUserResource> m_User;
    bool m_UserIsSet;
double m_Value;
    bool m_ValueIsSet;
int32_t m_Wallet_id;
    bool m_Wallet_idIsSet;
};

}
}
}
}

#endif /* WalletTransactionResource_H_ */
