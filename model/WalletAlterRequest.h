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
 * WalletAlterRequest.h
 *
 * 
 */

#ifndef WalletAlterRequest_H_
#define WalletAlterRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  WalletAlterRequest
    : public ModelBase
{
public:
    WalletAlterRequest();
    virtual ~WalletAlterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WalletAlterRequest members

    /// <summary>
    /// The amount of currency to add/remove. positive to add, negative to remove
    /// </summary>
    double getDelta() const;
    void setDelta(double value);
        /// <summary>
    /// The id of an invoice to attribute the transaction to
    /// </summary>
    int32_t getInvoiceId() const;
    void setInvoiceId(int32_t value);
    bool invoice_idIsSet() const;
    void unsetInvoice_id();
    /// <summary>
    /// The admin entered or system generated reason
    /// </summary>
    utility::string_t getReason() const;
    void setReason(utility::string_t value);
        /// <summary>
    /// The transaction type to allow for search/etc
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
    bool typeIsSet() const;
    void unsetType();

protected:
    double m_Delta;
    int32_t m_Invoice_id;
    bool m_Invoice_idIsSet;
utility::string_t m_Reason;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};

}
}
}
}

#endif /* WalletAlterRequest_H_ */
