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
 * ApplyPaymentRequest.h
 *
 * 
 */

#ifndef ApplyPaymentRequest_H_
#define ApplyPaymentRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ApplyPaymentRequest
    : public ModelBase
{
public:
    ApplyPaymentRequest();
    virtual ~ApplyPaymentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ApplyPaymentRequest members

    /// <summary>
    /// The id of the local invoice being paid.
    /// </summary>
    int32_t getInvoiceId() const;
    void setInvoiceId(int32_t value);
        /// <summary>
    /// The encoded receipt string from Apple&#39;s services.
    /// </summary>
    utility::string_t getReceipt() const;
    void setReceipt(utility::string_t value);
        /// <summary>
    /// The id of the specific transaction from Apple&#39;s services.
    /// </summary>
    utility::string_t getTransactionId() const;
    void setTransactionId(utility::string_t value);
    
protected:
    int32_t m_Invoice_id;
    utility::string_t m_Receipt;
    utility::string_t m_Transaction_id;
    };

}
}
}
}

#endif /* ApplyPaymentRequest_H_ */