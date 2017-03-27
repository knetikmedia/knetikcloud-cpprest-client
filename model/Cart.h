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
 * Cart.h
 *
 * 
 */

#ifndef Cart_H_
#define Cart_H_


#include "ModelBase.h"

#include "CartShippingOption.h"
#include "CouponDefinition.h"
#include "CartShippingAddressRequest.h"
#include <cpprest/details/basic_types.h>
#include "CartLineItem.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Cart
    : public ModelBase
{
public:
    Cart();
    virtual ~Cart();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Cart members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CartShippingOption>>& getAvailableShippingOptions();
    bool available_shipping_optionsIsSet() const;
    void unsetAvailable_shipping_options();
    /// <summary>
    /// 
    /// </summary>
    double getCountryTax() const;
    void setCountryTax(double value);
    bool country_taxIsSet() const;
    void unsetCountry_tax();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CouponDefinition>>& getCoupons();
    bool couponsIsSet() const;
    void unsetCoupons();
    /// <summary>
    /// 
    /// </summary>
    int64_t getCreated() const;
    void setCreated(int64_t value);
    bool createdIsSet() const;
    void unsetCreated();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrencyCode() const;
    void setCurrencyCode(utility::string_t value);
    bool currency_codeIsSet() const;
    void unsetCurrency_code();
    /// <summary>
    /// 
    /// </summary>
    double getDiscountTotal() const;
    void setDiscountTotal(double value);
    bool discount_totalIsSet() const;
    void unsetDiscount_total();
    /// <summary>
    /// 
    /// </summary>
    int32_t getErrorCode() const;
    void setErrorCode(int32_t value);
    bool error_codeIsSet() const;
    void unsetError_code();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorMessage() const;
    void setErrorMessage(utility::string_t value);
    bool error_messageIsSet() const;
    void unsetError_message();
    /// <summary>
    /// 
    /// </summary>
    double getGrandTotal() const;
    void setGrandTotal(double value);
    bool grand_totalIsSet() const;
    void unsetGrand_total();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    double getInvoiceId() const;
    void setInvoiceId(double value);
    bool invoice_idIsSet() const;
    void unsetInvoice_id();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CartLineItem>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();
    /// <summary>
    /// 
    /// </summary>
    int32_t getOwner() const;
    void setOwner(int32_t value);
    bool ownerIsSet() const;
    void unsetOwner();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CartShippingOption>>& getSelectedShippingOptions();
    bool selected_shipping_optionsIsSet() const;
    void unsetSelected_shipping_options();
    /// <summary>
    /// 
    /// </summary>
    bool getShippable() const;
    void setShippable(bool value);
    bool shippableIsSet() const;
    void unsetShippable();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CartShippingAddressRequest> getShippingAddress() const;
    void setShippingAddress(std::shared_ptr<CartShippingAddressRequest> value);
    bool shipping_addressIsSet() const;
    void unsetShipping_address();
    /// <summary>
    /// 
    /// </summary>
    double getShippingCost() const;
    void setShippingCost(double value);
    bool shipping_costIsSet() const;
    void unsetShipping_cost();
    /// <summary>
    /// 
    /// </summary>
    double getStateTax() const;
    void setStateTax(double value);
    bool state_taxIsSet() const;
    void unsetState_tax();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// 
    /// </summary>
    double getSubtotal() const;
    void setSubtotal(double value);
    bool subtotalIsSet() const;
    void unsetSubtotal();
    /// <summary>
    /// 
    /// </summary>
    int64_t getUpdated() const;
    void setUpdated(int64_t value);
    bool updatedIsSet() const;
    void unsetUpdated();

protected:
    std::vector<std::shared_ptr<CartShippingOption>> m_Available_shipping_options;
    bool m_Available_shipping_optionsIsSet;
double m_Country_tax;
    bool m_Country_taxIsSet;
std::vector<std::shared_ptr<CouponDefinition>> m_Coupons;
    bool m_CouponsIsSet;
int64_t m_Created;
    bool m_CreatedIsSet;
utility::string_t m_Currency_code;
    bool m_Currency_codeIsSet;
double m_Discount_total;
    bool m_Discount_totalIsSet;
int32_t m_Error_code;
    bool m_Error_codeIsSet;
utility::string_t m_Error_message;
    bool m_Error_messageIsSet;
double m_Grand_total;
    bool m_Grand_totalIsSet;
utility::string_t m_Id;
    bool m_IdIsSet;
double m_Invoice_id;
    bool m_Invoice_idIsSet;
std::vector<std::shared_ptr<CartLineItem>> m_Items;
    bool m_ItemsIsSet;
int32_t m_Owner;
    bool m_OwnerIsSet;
std::vector<std::shared_ptr<CartShippingOption>> m_Selected_shipping_options;
    bool m_Selected_shipping_optionsIsSet;
bool m_Shippable;
    bool m_ShippableIsSet;
std::shared_ptr<CartShippingAddressRequest> m_Shipping_address;
    bool m_Shipping_addressIsSet;
double m_Shipping_cost;
    bool m_Shipping_costIsSet;
double m_State_tax;
    bool m_State_taxIsSet;
utility::string_t m_Status;
    bool m_StatusIsSet;
double m_Subtotal;
    bool m_SubtotalIsSet;
int64_t m_Updated;
    bool m_UpdatedIsSet;
};

}
}
}
}

#endif /* Cart_H_ */
