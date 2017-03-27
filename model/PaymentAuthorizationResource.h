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
 * PaymentAuthorizationResource.h
 *
 * 
 */

#ifndef PaymentAuthorizationResource_H_
#define PaymentAuthorizationResource_H_


#include "ModelBase.h"

#include "SimpleReferenceResource«int».h"
#include "Object.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PaymentAuthorizationResource
    : public ModelBase
{
public:
    PaymentAuthorizationResource();
    virtual ~PaymentAuthorizationResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PaymentAuthorizationResource members

    /// <summary>
    /// Whether this authorization has been captured
    /// </summary>
    bool getCaptured() const;
    void setCaptured(bool value);
    bool capturedIsSet() const;
    void unsetCaptured();
    /// <summary>
    /// The date this authorization was received, unix timestamp in seconds
    /// </summary>
    int64_t getCreated() const;
    void setCreated(int64_t value);
    bool createdIsSet() const;
    void unsetCreated();
    /// <summary>
    /// The details for this authorization. Format dependent on payment provider
    /// </summary>
    std::shared_ptr<Object> getDetails() const;
    void setDetails(std::shared_ptr<Object> value);
    bool detailsIsSet() const;
    void unsetDetails();
    /// <summary>
    /// The id of the authorization
    /// </summary>
    int32_t getId() const;
    void setId(int32_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The invoice this authorization is intended to pay
    /// </summary>
    int32_t getInvoice() const;
    void setInvoice(int32_t value);
    bool invoiceIsSet() const;
    void unsetInvoice();
    /// <summary>
    /// The payment type (which provider) this payment is through
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«int»> getPaymentType() const;
    void setPaymentType(std::shared_ptr<SimpleReferenceResource«int»> value);
    
protected:
    bool m_Captured;
    bool m_CapturedIsSet;
int64_t m_Created;
    bool m_CreatedIsSet;
std::shared_ptr<Object> m_Details;
    bool m_DetailsIsSet;
int32_t m_Id;
    bool m_IdIsSet;
int32_t m_Invoice;
    bool m_InvoiceIsSet;
std::shared_ptr<SimpleReferenceResource«int»> m_Payment_type;
    };

}
}
}
}

#endif /* PaymentAuthorizationResource_H_ */