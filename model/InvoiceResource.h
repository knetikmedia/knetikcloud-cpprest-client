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
 * InvoiceResource.h
 *
 * 
 */

#ifndef InvoiceResource_H_
#define InvoiceResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"
#include "InvoiceItemResource.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  InvoiceResource
    : public ModelBase
{
public:
    InvoiceResource();
    virtual ~InvoiceResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InvoiceResource members

    /// <summary>
    /// Line one of the customer&#39;s billing address
    /// </summary>
    utility::string_t getBillingAddress1() const;
    bool billingAddress1IsSet() const;
    void unsetBilling_address1();
    void setBillingAddress1(utility::string_t value);
    /// <summary>
    /// Line two of the customer&#39;s billing address
    /// </summary>
    utility::string_t getBillingAddress2() const;
    bool billingAddress2IsSet() const;
    void unsetBilling_address2();
    void setBillingAddress2(utility::string_t value);
    /// <summary>
    /// The city for the customer&#39;s billing address
    /// </summary>
    utility::string_t getBillingCityName() const;
    bool billingCityNameIsSet() const;
    void unsetBilling_city_name();
    void setBillingCityName(utility::string_t value);
    /// <summary>
    /// The country for the customer&#39;s billing address
    /// </summary>
    utility::string_t getBillingCountryName() const;
    bool billingCountryNameIsSet() const;
    void unsetBilling_country_name();
    void setBillingCountryName(utility::string_t value);
    /// <summary>
    /// The customer&#39;s name for the billing address
    /// </summary>
    utility::string_t getBillingFullName() const;
    bool billingFullNameIsSet() const;
    void unsetBilling_full_name();
    void setBillingFullName(utility::string_t value);
    /// <summary>
    /// The postal code for the customer&#39;s billing address
    /// </summary>
    utility::string_t getBillingPostalCode() const;
    bool billingPostalCodeIsSet() const;
    void unsetBilling_postal_code();
    void setBillingPostalCode(utility::string_t value);
    /// <summary>
    /// The state for the customer&#39;s billing address
    /// </summary>
    utility::string_t getBillingStateName() const;
    bool billingStateNameIsSet() const;
    void unsetBilling_state_name();
    void setBillingStateName(utility::string_t value);
    /// <summary>
    /// The guid of the cart this invoice came from
    /// </summary>
    utility::string_t getCartId() const;
    bool cartIdIsSet() const;
    void unsetCart_id();
    void setCartId(utility::string_t value);
    /// <summary>
    /// The date the invoice was created, unix timestamp in seconds
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The code for the currency invoice prices are in
    /// </summary>
    utility::string_t getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();
    void setCurrency(utility::string_t value);
    /// <summary>
    /// The fulfillment status of the invoice
    /// </summary>
    utility::string_t getCurrentFulfillmentStatus() const;
    bool currentFulfillmentStatusIsSet() const;
    void unsetCurrent_fulfillment_status();
    void setCurrentFulfillmentStatus(utility::string_t value);
    /// <summary>
    /// The payment status of the invoice
    /// </summary>
    utility::string_t getCurrentPaymentStatus() const;
    bool currentPaymentStatusIsSet() const;
    void unsetCurrent_payment_status();
    void setCurrentPaymentStatus(utility::string_t value);
    /// <summary>
    /// The amount of money saved through coupons
    /// </summary>
    double getDiscount() const;
    bool discountIsSet() const;
    void unsetDiscount();
    void setDiscount(double value);
    /// <summary>
    /// The customer&#39;s email address
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();
    void setEmail(utility::string_t value);
    /// <summary>
    /// An external reference to filter on
    /// </summary>
    utility::string_t getExternalRef() const;
    bool externalRefIsSet() const;
    void unsetExternal_ref();
    void setExternalRef(utility::string_t value);
    /// <summary>
    /// The amount of federal tax added
    /// </summary>
    double getFedTax() const;
    bool fedTaxIsSet() const;
    void unsetFed_tax();
    void setFedTax(double value);
    /// <summary>
    /// The final price of the invoice
    /// </summary>
    double getGrandTotal() const;
    bool grandTotalIsSet() const;
    void unsetGrand_total();
    void setGrandTotal(double value);
    /// <summary>
    /// The id of the invoice
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// A reference number for the invoice
    /// </summary>
    utility::string_t getInvoiceNumber() const;
    bool invoiceNumberIsSet() const;
    void unsetInvoice_number();
    void setInvoiceNumber(utility::string_t value);
    /// <summary>
    /// A list of items within the invoice
    /// </summary>
    std::vector<std::shared_ptr<InvoiceItemResource>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();
    void setItems(std::vector<std::shared_ptr<InvoiceItemResource>> value);
    /// <summary>
    /// The customer&#39;s name prefix
    /// </summary>
    utility::string_t getNamePrefix() const;
    bool namePrefixIsSet() const;
    void unsetName_prefix();
    void setNamePrefix(utility::string_t value);
    /// <summary>
    /// Notes about the order
    /// </summary>
    utility::string_t getOrderNotes() const;
    bool orderNotesIsSet() const;
    void unsetOrder_notes();
    void setOrderNotes(utility::string_t value);
    /// <summary>
    /// The id of an invoice this is a child of
    /// </summary>
    int32_t getParentInvoiceId() const;
    bool parentInvoiceIdIsSet() const;
    void unsetParent_invoice_id();
    void setParentInvoiceId(int32_t value);
    /// <summary>
    /// The id of a saved payment method used to pay for the invoice
    /// </summary>
    int32_t getPaymentMethodId() const;
    bool paymentMethodIdIsSet() const;
    void unsetPayment_method_id();
    void setPaymentMethodId(int32_t value);
    /// <summary>
    /// The customer&#39;s phone number
    /// </summary>
    utility::string_t getPhone() const;
    bool phoneIsSet() const;
    void unsetPhone();
    void setPhone(utility::string_t value);
    /// <summary>
    /// The customer&#39;s phone number
    /// </summary>
    utility::string_t getPhoneNumber() const;
    bool phoneNumberIsSet() const;
    void unsetPhone_number();
    void setPhoneNumber(utility::string_t value);
    /// <summary>
    /// The shipping cost
    /// </summary>
    double getShipping() const;
    bool shippingIsSet() const;
    void unsetShipping();
    void setShipping(double value);
    /// <summary>
    /// Line one of the customer&#39;s shipping address
    /// </summary>
    utility::string_t getShippingAddress1() const;
    bool shippingAddress1IsSet() const;
    void unsetShipping_address1();
    void setShippingAddress1(utility::string_t value);
    /// <summary>
    /// Line two of the customer&#39;s shipping address
    /// </summary>
    utility::string_t getShippingAddress2() const;
    bool shippingAddress2IsSet() const;
    void unsetShipping_address2();
    void setShippingAddress2(utility::string_t value);
    /// <summary>
    /// The city for the customer&#39;s shipping address
    /// </summary>
    utility::string_t getShippingCityName() const;
    bool shippingCityNameIsSet() const;
    void unsetShipping_city_name();
    void setShippingCityName(utility::string_t value);
    /// <summary>
    /// The country for the customer&#39;s shipping address
    /// </summary>
    utility::string_t getShippingCountryName() const;
    bool shippingCountryNameIsSet() const;
    void unsetShipping_country_name();
    void setShippingCountryName(utility::string_t value);
    /// <summary>
    /// The customer&#39;s name for the shipping address
    /// </summary>
    utility::string_t getShippingFullName() const;
    bool shippingFullNameIsSet() const;
    void unsetShipping_full_name();
    void setShippingFullName(utility::string_t value);
    /// <summary>
    /// The postal code for the customer&#39;s shipping address
    /// </summary>
    utility::string_t getShippingPostalCode() const;
    bool shippingPostalCodeIsSet() const;
    void unsetShipping_postal_code();
    void setShippingPostalCode(utility::string_t value);
    /// <summary>
    /// The state for the customer&#39;s shipping address
    /// </summary>
    utility::string_t getShippingStateName() const;
    bool shippingStateNameIsSet() const;
    void unsetShipping_state_name();
    void setShippingStateName(utility::string_t value);
    /// <summary>
    /// A number to use in sorting items. default 500.
    /// </summary>
    int32_t getSort() const;
    bool sortIsSet() const;
    void unsetSort();
    void setSort(int32_t value);
    /// <summary>
    /// The amount of state tax added
    /// </summary>
    double getStateTax() const;
    bool stateTaxIsSet() const;
    void unsetState_tax();
    void setStateTax(double value);
    /// <summary>
    /// The sum price of all items before shipping, coupons and tax
    /// </summary>
    double getSubtotal() const;
    bool subtotalIsSet() const;
    void unsetSubtotal();
    void setSubtotal(double value);
    /// <summary>
    /// The date the invoice was last updated, unix timestamp in seconds
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);
    /// <summary>
    /// The owner of the invoice
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
    bool userIsSet() const;
    void unsetUser();
    void setUser(std::shared_ptr<SimpleUserResource> value);
    /// <summary>
    /// The id of the vendor
    /// </summary>
    int32_t getVendorId() const;
    bool vendorIdIsSet() const;
    void unsetVendor_id();
    void setVendorId(int32_t value);
    /// <summary>
    /// The name of the invoice
    /// </summary>
    utility::string_t getVendorName() const;
    bool vendorNameIsSet() const;
    void unsetVendor_name();
    void setVendorName(utility::string_t value);

protected:
    utility::string_t m_Billing_address1;
    bool m_Billing_address1IsSet;
    utility::string_t m_Billing_address2;
    bool m_Billing_address2IsSet;
    utility::string_t m_Billing_city_name;
    bool m_Billing_city_nameIsSet;
    utility::string_t m_Billing_country_name;
    bool m_Billing_country_nameIsSet;
    utility::string_t m_Billing_full_name;
    bool m_Billing_full_nameIsSet;
    utility::string_t m_Billing_postal_code;
    bool m_Billing_postal_codeIsSet;
    utility::string_t m_Billing_state_name;
    bool m_Billing_state_nameIsSet;
    utility::string_t m_Cart_id;
    bool m_Cart_idIsSet;
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    utility::string_t m_Currency;
    bool m_CurrencyIsSet;
    utility::string_t m_Current_fulfillment_status;
    bool m_Current_fulfillment_statusIsSet;
    utility::string_t m_Current_payment_status;
    bool m_Current_payment_statusIsSet;
    double m_Discount;
    bool m_DiscountIsSet;
    utility::string_t m_Email;
    bool m_EmailIsSet;
    utility::string_t m_External_ref;
    bool m_External_refIsSet;
    double m_Fed_tax;
    bool m_Fed_taxIsSet;
    double m_Grand_total;
    bool m_Grand_totalIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Invoice_number;
    bool m_Invoice_numberIsSet;
    std::vector<std::shared_ptr<InvoiceItemResource>> m_Items;
    bool m_ItemsIsSet;
    utility::string_t m_Name_prefix;
    bool m_Name_prefixIsSet;
    utility::string_t m_Order_notes;
    bool m_Order_notesIsSet;
    int32_t m_Parent_invoice_id;
    bool m_Parent_invoice_idIsSet;
    int32_t m_Payment_method_id;
    bool m_Payment_method_idIsSet;
    utility::string_t m_Phone;
    bool m_PhoneIsSet;
    utility::string_t m_Phone_number;
    bool m_Phone_numberIsSet;
    double m_Shipping;
    bool m_ShippingIsSet;
    utility::string_t m_Shipping_address1;
    bool m_Shipping_address1IsSet;
    utility::string_t m_Shipping_address2;
    bool m_Shipping_address2IsSet;
    utility::string_t m_Shipping_city_name;
    bool m_Shipping_city_nameIsSet;
    utility::string_t m_Shipping_country_name;
    bool m_Shipping_country_nameIsSet;
    utility::string_t m_Shipping_full_name;
    bool m_Shipping_full_nameIsSet;
    utility::string_t m_Shipping_postal_code;
    bool m_Shipping_postal_codeIsSet;
    utility::string_t m_Shipping_state_name;
    bool m_Shipping_state_nameIsSet;
    int32_t m_Sort;
    bool m_SortIsSet;
    double m_State_tax;
    bool m_State_taxIsSet;
    double m_Subtotal;
    bool m_SubtotalIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
    std::shared_ptr<SimpleUserResource> m_User;
    bool m_UserIsSet;
    int32_t m_Vendor_id;
    bool m_Vendor_idIsSet;
    utility::string_t m_Vendor_name;
    bool m_Vendor_nameIsSet;
};

}
}
}
}

#endif /* InvoiceResource_H_ */
