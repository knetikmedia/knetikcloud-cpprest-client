/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * FinalizePayPalPaymentRequest.h
 *
 * 
 */

#ifndef FinalizePayPalPaymentRequest_H_
#define FinalizePayPalPaymentRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  FinalizePayPalPaymentRequest
    : public ModelBase
{
public:
    FinalizePayPalPaymentRequest();
    virtual ~FinalizePayPalPaymentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FinalizePayPalPaymentRequest members

    /// <summary>
    /// The ID of the invoice that is being paid. Must match the invoice sent in originally
    /// </summary>
    int32_t getInvoiceId() const;
        void setInvoiceId(int32_t value);
    /// <summary>
    /// The ID of the payer that PayPal returned with the user at the return URL
    /// </summary>
    utility::string_t getPayerId() const;
        void setPayerId(utility::string_t value);
    /// <summary>
    /// The token that PayPal returned with the user in the return URL
    /// </summary>
    utility::string_t getToken() const;
        void setToken(utility::string_t value);

protected:
    int32_t m_Invoice_id;
        utility::string_t m_Payer_id;
        utility::string_t m_Token;
    };

}
}
}
}

#endif /* FinalizePayPalPaymentRequest_H_ */