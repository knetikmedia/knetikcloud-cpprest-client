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
 * XsollaPaymentRequest.h
 *
 * 
 */

#ifndef XsollaPaymentRequest_H_
#define XsollaPaymentRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  XsollaPaymentRequest
    : public ModelBase
{
public:
    XsollaPaymentRequest();
    virtual ~XsollaPaymentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// XsollaPaymentRequest members

    /// <summary>
    /// The id of an invoice to pay
    /// </summary>
    int32_t getInvoiceId() const;
        void setInvoiceId(int32_t value);
    /// <summary>
    /// The endpoint URL xsolla should forward the user to after they pay
    /// </summary>
    utility::string_t getReturnUrl() const;
        void setReturnUrl(utility::string_t value);

protected:
    int32_t m_Invoice_id;
        utility::string_t m_Return_url;
    };

}
}
}
}

#endif /* XsollaPaymentRequest_H_ */
