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
 * PaymentMethodTypeResource.h
 *
 * 
 */

#ifndef PaymentMethodTypeResource_H_
#define PaymentMethodTypeResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PaymentMethodTypeResource
    : public ModelBase
{
public:
    PaymentMethodTypeResource();
    virtual ~PaymentMethodTypeResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PaymentMethodTypeResource members

    /// <summary>
    /// The id of the payment method type
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// The maximum timelimit in hours for an invoice in the processing status while waiting on this payment method type. Defaults to the global config invoice.processing_expiration_hours if null
    /// </summary>
    int32_t getInvoiceProcessingHours() const;
    bool invoiceProcessingHoursIsSet() const;
    void unsetInvoice_processing_hours();
    void setInvoiceProcessingHours(int32_t value);
    /// <summary>
    /// The name of the payment method type
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Whether the payment handler supports the authorize and capture flow
    /// </summary>
    bool getSupportsCapture() const;
    bool supportsCaptureIsSet() const;
    void unsetSupports_capture();
    void setSupportsCapture(bool value);
    /// <summary>
    /// Whether the payment handler supports paying for part of an invoice, rather than the full grand_total
    /// </summary>
    bool getSupportsPartial() const;
    bool supportsPartialIsSet() const;
    void unsetSupports_partial();
    void setSupportsPartial(bool value);
    /// <summary>
    /// Whether the payment handler supports rebilling the method later (for saved payments or subscriptions)
    /// </summary>
    bool getSupportsRebill() const;
    bool supportsRebillIsSet() const;
    void unsetSupports_rebill();
    void setSupportsRebill(bool value);
    /// <summary>
    /// Whether the payment handler supports refunding
    /// </summary>
    bool getSupportsRefunds() const;
    bool supportsRefundsIsSet() const;
    void unsetSupports_refunds();
    void setSupportsRefunds(bool value);

protected:
    int32_t m_Id;
        int32_t m_Invoice_processing_hours;
    bool m_Invoice_processing_hoursIsSet;
    utility::string_t m_Name;
        bool m_Supports_capture;
    bool m_Supports_captureIsSet;
    bool m_Supports_partial;
    bool m_Supports_partialIsSet;
    bool m_Supports_rebill;
    bool m_Supports_rebillIsSet;
    bool m_Supports_refunds;
    bool m_Supports_refundsIsSet;
};

}
}
}
}

#endif /* PaymentMethodTypeResource_H_ */
