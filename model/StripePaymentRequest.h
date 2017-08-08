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
 * StripePaymentRequest.h
 *
 * 
 */

#ifndef StripePaymentRequest_H_
#define StripePaymentRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  StripePaymentRequest
    : public ModelBase
{
public:
    StripePaymentRequest();
    virtual ~StripePaymentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// StripePaymentRequest members

    /// <summary>
    /// The id of the invoice to pay
    /// </summary>
    int32_t getInvoiceId() const;
        void setInvoiceId(int32_t value);
    /// <summary>
    /// A token from Stripe to identify payment info to be tied to the customer
    /// </summary>
    utility::string_t getToken() const;
        void setToken(utility::string_t value);

protected:
    int32_t m_Invoice_id;
        utility::string_t m_Token;
    };

}
}
}
}

#endif /* StripePaymentRequest_H_ */
