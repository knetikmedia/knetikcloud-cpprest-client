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

namespace com {
namespace knetikcloud {
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
    bool availableShippingOptionsIsSet() const;
    void unsetAvailable_shipping_options();
    void setAvailableShippingOptions(std::vector<std::shared_ptr<CartShippingOption>> value);
    /// <summary>
    /// 
    /// </summary>
    double getCountryTax() const;
    bool countryTaxIsSet() const;
    void unsetCountry_tax();
    void setCountryTax(double value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CouponDefinition>>& getCoupons();
    bool couponsIsSet() const;
    void unsetCoupons();
    void setCoupons(std::vector<std::shared_ptr<CouponDefinition>> value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getCreated() const;
    bool createdIsSet() const;
    void unsetCreated();
    void setCreated(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrencyCode() const;
    bool currencyCodeIsSet() const;
    void unsetCurrency_code();
    void setCurrencyCode(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getDiscountTotal() const;
    bool discountTotalIsSet() const;
    void unsetDiscount_total();
    void setDiscountTotal(double value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getErrorCode() const;
    bool errorCodeIsSet() const;
    void unsetError_code();
    void setErrorCode(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unsetError_message();
    void setErrorMessage(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getGrandTotal() const;
    bool grandTotalIsSet() const;
    void unsetGrand_total();
    void setGrandTotal(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getInvoiceId() const;
    bool invoiceIdIsSet() const;
    void unsetInvoice_id();
    void setInvoiceId(double value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CartLineItem>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();
    void setItems(std::vector<std::shared_ptr<CartLineItem>> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getOwner() const;
    bool ownerIsSet() const;
    void unsetOwner();
    void setOwner(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CartShippingOption>>& getSelectedShippingOptions();
    bool selectedShippingOptionsIsSet() const;
    void unsetSelected_shipping_options();
    void setSelectedShippingOptions(std::vector<std::shared_ptr<CartShippingOption>> value);
    /// <summary>
    /// 
    /// </summary>
    bool getShippable() const;
    bool shippableIsSet() const;
    void unsetShippable();
    void setShippable(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CartShippingAddressRequest> getShippingAddress() const;
    bool shippingAddressIsSet() const;
    void unsetShipping_address();
    void setShippingAddress(std::shared_ptr<CartShippingAddressRequest> value);
    /// <summary>
    /// 
    /// </summary>
    double getShippingCost() const;
    bool shippingCostIsSet() const;
    void unsetShipping_cost();
    void setShippingCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getStateTax() const;
    bool stateTaxIsSet() const;
    void unsetState_tax();
    void setStateTax(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSubtotal() const;
    bool subtotalIsSet() const;
    void unsetSubtotal();
    void setSubtotal(double value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getUpdated() const;
    bool updatedIsSet() const;
    void unsetUpdated();
    void setUpdated(int64_t value);

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