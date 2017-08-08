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
 * CartSummary.h
 *
 * 
 */

#ifndef CartSummary_H_
#define CartSummary_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CartSummary
    : public ModelBase
{
public:
    CartSummary();
    virtual ~CartSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CartSummary members

    /// <summary>
    /// The date/time this resource was created in seconds since unix epoch
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The unique id code for the currency used in the cart
    /// </summary>
    utility::string_t getCurrencyCode() const;
    bool currencyCodeIsSet() const;
    void unsetCurrency_code();
    void setCurrencyCode(utility::string_t value);
    /// <summary>
    /// The grand total for the cart
    /// </summary>
    double getGrandTotal() const;
    bool grandTotalIsSet() const;
    void unsetGrand_total();
    void setGrandTotal(double value);
    /// <summary>
    /// The unique ID for the cart
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The ID of the invoice associated with this cart
    /// </summary>
    double getInvoiceId() const;
    bool invoiceIdIsSet() const;
    void unsetInvoice_id();
    void setInvoiceId(double value);
    /// <summary>
    /// The number of items in the cart
    /// </summary>
    int32_t getItemsInCart() const;
    bool itemsInCartIsSet() const;
    void unsetItems_in_cart();
    void setItemsInCart(int32_t value);
    /// <summary>
    /// The status of the cart
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// The subtotal of all items in the cart
    /// </summary>
    double getSubtotal() const;
    bool subtotalIsSet() const;
    void unsetSubtotal();
    void setSubtotal(double value);

protected:
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    utility::string_t m_Currency_code;
    bool m_Currency_codeIsSet;
    double m_Grand_total;
    bool m_Grand_totalIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    double m_Invoice_id;
    bool m_Invoice_idIsSet;
    int32_t m_Items_in_cart;
    bool m_Items_in_cartIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    double m_Subtotal;
    bool m_SubtotalIsSet;
};

}
}
}
}

#endif /* CartSummary_H_ */
