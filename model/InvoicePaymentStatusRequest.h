/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * InvoicePaymentStatusRequest.h
 *
 * 
 */

#ifndef InvoicePaymentStatusRequest_H_
#define InvoicePaymentStatusRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  InvoicePaymentStatusRequest
    : public ModelBase
{
public:
    InvoicePaymentStatusRequest();
    virtual ~InvoicePaymentStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InvoicePaymentStatusRequest members

    /// <summary>
    /// If included, will set the payment method used on the invoice
    /// </summary>
    int32_t getPaymentMethodId() const;
    bool paymentMethodIdIsSet() const;
    void unsetPayment_method_id();
    void setPaymentMethodId(int32_t value);
    /// <summary>
    /// The new status for the invoice. Additional options may be available based on configuration.  Allowable values: &#39;new&#39;, &#39;paid&#39;, &#39;hold&#39;, &#39;canceled&#39;, &#39;payment failed&#39;, &#39;partial refund&#39;, &#39;refund&#39;
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);

protected:
    int32_t m_Payment_method_id;
    bool m_Payment_method_idIsSet;
    utility::string_t m_Status;
    };

}
}
}
}

#endif /* InvoicePaymentStatusRequest_H_ */
