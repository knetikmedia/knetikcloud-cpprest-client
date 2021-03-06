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



#include "Cart.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Cart::Cart()
{
    m_Available_shipping_optionsIsSet = false;
    m_Country_tax = 0.0;
    m_Country_taxIsSet = false;
    m_CouponsIsSet = false;
    m_Created = 0L;
    m_CreatedIsSet = false;
    m_Currency_code = U("");
    m_Currency_codeIsSet = false;
    m_Discount_total = 0.0;
    m_Discount_totalIsSet = false;
    m_Error_code = 0;
    m_Error_codeIsSet = false;
    m_Error_message = U("");
    m_Error_messageIsSet = false;
    m_Grand_total = 0.0;
    m_Grand_totalIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Invoice_id = 0.0;
    m_Invoice_idIsSet = false;
    m_ItemsIsSet = false;
    m_Owner = 0;
    m_OwnerIsSet = false;
    m_Selected_shipping_optionsIsSet = false;
    m_Shippable = false;
    m_ShippableIsSet = false;
    m_Shipping_addressIsSet = false;
    m_Shipping_cost = 0.0;
    m_Shipping_costIsSet = false;
    m_State_tax = 0.0;
    m_State_taxIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_Subtotal = 0.0;
    m_SubtotalIsSet = false;
    m_Updated = 0L;
    m_UpdatedIsSet = false;
}

Cart::~Cart()
{
}

void Cart::validate()
{
    // TODO: implement validation
}

web::json::value Cart::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Available_shipping_options )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("available_shipping_options")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Country_taxIsSet)
    {
        val[U("country_tax")] = ModelBase::toJson(m_Country_tax);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Coupons )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("coupons")] = web::json::value::array(jsonArray);
        }
    }
    if(m_CreatedIsSet)
    {
        val[U("created")] = ModelBase::toJson(m_Created);
    }
    if(m_Currency_codeIsSet)
    {
        val[U("currency_code")] = ModelBase::toJson(m_Currency_code);
    }
    if(m_Discount_totalIsSet)
    {
        val[U("discount_total")] = ModelBase::toJson(m_Discount_total);
    }
    if(m_Error_codeIsSet)
    {
        val[U("error_code")] = ModelBase::toJson(m_Error_code);
    }
    if(m_Error_messageIsSet)
    {
        val[U("error_message")] = ModelBase::toJson(m_Error_message);
    }
    if(m_Grand_totalIsSet)
    {
        val[U("grand_total")] = ModelBase::toJson(m_Grand_total);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Invoice_idIsSet)
    {
        val[U("invoice_id")] = ModelBase::toJson(m_Invoice_id);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Items )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("items")] = web::json::value::array(jsonArray);
        }
    }
    if(m_OwnerIsSet)
    {
        val[U("owner")] = ModelBase::toJson(m_Owner);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Selected_shipping_options )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("selected_shipping_options")] = web::json::value::array(jsonArray);
        }
    }
    if(m_ShippableIsSet)
    {
        val[U("shippable")] = ModelBase::toJson(m_Shippable);
    }
    if(m_Shipping_addressIsSet)
    {
        val[U("shipping_address")] = ModelBase::toJson(m_Shipping_address);
    }
    if(m_Shipping_costIsSet)
    {
        val[U("shipping_cost")] = ModelBase::toJson(m_Shipping_cost);
    }
    if(m_State_taxIsSet)
    {
        val[U("state_tax")] = ModelBase::toJson(m_State_tax);
    }
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    if(m_SubtotalIsSet)
    {
        val[U("subtotal")] = ModelBase::toJson(m_Subtotal);
    }
    if(m_UpdatedIsSet)
    {
        val[U("updated")] = ModelBase::toJson(m_Updated);
    }

    return val;
}

void Cart::fromJson(web::json::value& val)
{
    {
        m_Available_shipping_options.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("available_shipping_options")))
        {
        for( auto& item : val[U("available_shipping_options")].as_array() )
        {
            if(item.is_null())
            {
                m_Available_shipping_options.push_back( std::shared_ptr<CartShippingOption>(nullptr) );
            }
            else
            {
                std::shared_ptr<CartShippingOption> newItem(new CartShippingOption());
                newItem->fromJson(item);
                m_Available_shipping_options.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("country_tax")))
    {
        setCountryTax(ModelBase::doubleFromJson(val[U("country_tax")]));
    }
    {
        m_Coupons.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("coupons")))
        {
        for( auto& item : val[U("coupons")].as_array() )
        {
            if(item.is_null())
            {
                m_Coupons.push_back( std::shared_ptr<CouponDefinition>(nullptr) );
            }
            else
            {
                std::shared_ptr<CouponDefinition> newItem(new CouponDefinition());
                newItem->fromJson(item);
                m_Coupons.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("created")))
    {
        setCreated(ModelBase::int64_tFromJson(val[U("created")]));
    }
    if(val.has_field(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
    }
    if(val.has_field(U("discount_total")))
    {
        setDiscountTotal(ModelBase::doubleFromJson(val[U("discount_total")]));
    }
    if(val.has_field(U("error_code")))
    {
        setErrorCode(ModelBase::int32_tFromJson(val[U("error_code")]));
    }
    if(val.has_field(U("error_message")))
    {
        setErrorMessage(ModelBase::stringFromJson(val[U("error_message")]));
    }
    if(val.has_field(U("grand_total")))
    {
        setGrandTotal(ModelBase::doubleFromJson(val[U("grand_total")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("invoice_id")))
    {
        setInvoiceId(ModelBase::doubleFromJson(val[U("invoice_id")]));
    }
    {
        m_Items.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("items")))
        {
        for( auto& item : val[U("items")].as_array() )
        {
            if(item.is_null())
            {
                m_Items.push_back( std::shared_ptr<CartLineItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<CartLineItem> newItem(new CartLineItem());
                newItem->fromJson(item);
                m_Items.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("owner")))
    {
        setOwner(ModelBase::int32_tFromJson(val[U("owner")]));
    }
    {
        m_Selected_shipping_options.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("selected_shipping_options")))
        {
        for( auto& item : val[U("selected_shipping_options")].as_array() )
        {
            if(item.is_null())
            {
                m_Selected_shipping_options.push_back( std::shared_ptr<CartShippingOption>(nullptr) );
            }
            else
            {
                std::shared_ptr<CartShippingOption> newItem(new CartShippingOption());
                newItem->fromJson(item);
                m_Selected_shipping_options.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("shippable")))
    {
        setShippable(ModelBase::boolFromJson(val[U("shippable")]));
    }
    if(val.has_field(U("shipping_address")))
    {
        if(!val[U("shipping_address")].is_null())
        {
            std::shared_ptr<CartShippingAddressRequest> newItem(new CartShippingAddressRequest());
            newItem->fromJson(val[U("shipping_address")]);
            setShippingAddress( newItem );
        }
    }
    if(val.has_field(U("shipping_cost")))
    {
        setShippingCost(ModelBase::doubleFromJson(val[U("shipping_cost")]));
    }
    if(val.has_field(U("state_tax")))
    {
        setStateTax(ModelBase::doubleFromJson(val[U("state_tax")]));
    }
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
    }
    if(val.has_field(U("subtotal")))
    {
        setSubtotal(ModelBase::doubleFromJson(val[U("subtotal")]));
    }
    if(val.has_field(U("updated")))
    {
        setUpdated(ModelBase::int64_tFromJson(val[U("updated")]));
    }
}

void Cart::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Available_shipping_options )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("available_shipping_options"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Country_taxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("country_tax"), m_Country_tax));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Coupons )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("coupons"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created"), m_Created));
    }
    if(m_Currency_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_code"), m_Currency_code));
        
    }
    if(m_Discount_totalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("discount_total"), m_Discount_total));
    }
    if(m_Error_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("error_code"), m_Error_code));
    }
    if(m_Error_messageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("error_message"), m_Error_message));
        
    }
    if(m_Grand_totalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("grand_total"), m_Grand_total));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_Invoice_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("invoice_id"), m_Invoice_id));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Items )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("items"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("owner"), m_Owner));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Selected_shipping_options )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("selected_shipping_options"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_ShippableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("shippable"), m_Shippable));
    }
    if(m_Shipping_addressIsSet)
    {
        if (m_Shipping_address.get())
        {
            m_Shipping_address->toMultipart(multipart, U("shipping_address."));
        }
        
    }
    if(m_Shipping_costIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("shipping_cost"), m_Shipping_cost));
    }
    if(m_State_taxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("state_tax"), m_State_tax));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
        
    }
    if(m_SubtotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("subtotal"), m_Subtotal));
    }
    if(m_UpdatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated"), m_Updated));
    }
}

void Cart::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Available_shipping_options.clear();
        if(multipart->hasContent(U("available_shipping_options")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("available_shipping_options"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Available_shipping_options.push_back( std::shared_ptr<CartShippingOption>(nullptr) );
            }
            else
            {
                std::shared_ptr<CartShippingOption> newItem(new CartShippingOption());
                newItem->fromJson(item);
                m_Available_shipping_options.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("country_tax")))
    {
        setCountryTax(ModelBase::doubleFromHttpContent(multipart->getContent(U("country_tax"))));
    }
    {
        m_Coupons.clear();
        if(multipart->hasContent(U("coupons")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("coupons"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Coupons.push_back( std::shared_ptr<CouponDefinition>(nullptr) );
            }
            else
            {
                std::shared_ptr<CouponDefinition> newItem(new CouponDefinition());
                newItem->fromJson(item);
                m_Coupons.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("created")))
    {
        setCreated(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created"))));
    }
    if(multipart->hasContent(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_code"))));
    }
    if(multipart->hasContent(U("discount_total")))
    {
        setDiscountTotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("discount_total"))));
    }
    if(multipart->hasContent(U("error_code")))
    {
        setErrorCode(ModelBase::int32_tFromHttpContent(multipart->getContent(U("error_code"))));
    }
    if(multipart->hasContent(U("error_message")))
    {
        setErrorMessage(ModelBase::stringFromHttpContent(multipart->getContent(U("error_message"))));
    }
    if(multipart->hasContent(U("grand_total")))
    {
        setGrandTotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("grand_total"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("invoice_id")))
    {
        setInvoiceId(ModelBase::doubleFromHttpContent(multipart->getContent(U("invoice_id"))));
    }
    {
        m_Items.clear();
        if(multipart->hasContent(U("items")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("items"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Items.push_back( std::shared_ptr<CartLineItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<CartLineItem> newItem(new CartLineItem());
                newItem->fromJson(item);
                m_Items.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("owner")))
    {
        setOwner(ModelBase::int32_tFromHttpContent(multipart->getContent(U("owner"))));
    }
    {
        m_Selected_shipping_options.clear();
        if(multipart->hasContent(U("selected_shipping_options")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("selected_shipping_options"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Selected_shipping_options.push_back( std::shared_ptr<CartShippingOption>(nullptr) );
            }
            else
            {
                std::shared_ptr<CartShippingOption> newItem(new CartShippingOption());
                newItem->fromJson(item);
                m_Selected_shipping_options.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("shippable")))
    {
        setShippable(ModelBase::boolFromHttpContent(multipart->getContent(U("shippable"))));
    }
    if(multipart->hasContent(U("shipping_address")))
    {
        if(multipart->hasContent(U("shipping_address")))
        {
            std::shared_ptr<CartShippingAddressRequest> newItem(new CartShippingAddressRequest());
            newItem->fromMultiPart(multipart, U("shipping_address."));
            setShippingAddress( newItem );
        }
    }
    if(multipart->hasContent(U("shipping_cost")))
    {
        setShippingCost(ModelBase::doubleFromHttpContent(multipart->getContent(U("shipping_cost"))));
    }
    if(multipart->hasContent(U("state_tax")))
    {
        setStateTax(ModelBase::doubleFromHttpContent(multipart->getContent(U("state_tax"))));
    }
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
    }
    if(multipart->hasContent(U("subtotal")))
    {
        setSubtotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("subtotal"))));
    }
    if(multipart->hasContent(U("updated")))
    {
        setUpdated(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated"))));
    }
}

std::vector<std::shared_ptr<CartShippingOption>>& Cart::getAvailableShippingOptions()
{
    return m_Available_shipping_options;
}

void Cart::setAvailableShippingOptions(std::vector<std::shared_ptr<CartShippingOption>> value)
{
    m_Available_shipping_options = value;
    m_Available_shipping_optionsIsSet = true;
}
bool Cart::availableShippingOptionsIsSet() const
{
    return m_Available_shipping_optionsIsSet;
}

void Cart::unsetAvailable_shipping_options()
{
    m_Available_shipping_optionsIsSet = false;
}

double Cart::getCountryTax() const
{
    return m_Country_tax;
}


void Cart::setCountryTax(double value)
{
    m_Country_tax = value;
    m_Country_taxIsSet = true;
}
bool Cart::countryTaxIsSet() const
{
    return m_Country_taxIsSet;
}

void Cart::unsetCountry_tax()
{
    m_Country_taxIsSet = false;
}

std::vector<std::shared_ptr<CouponDefinition>>& Cart::getCoupons()
{
    return m_Coupons;
}

void Cart::setCoupons(std::vector<std::shared_ptr<CouponDefinition>> value)
{
    m_Coupons = value;
    m_CouponsIsSet = true;
}
bool Cart::couponsIsSet() const
{
    return m_CouponsIsSet;
}

void Cart::unsetCoupons()
{
    m_CouponsIsSet = false;
}

int64_t Cart::getCreated() const
{
    return m_Created;
}


void Cart::setCreated(int64_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}
bool Cart::createdIsSet() const
{
    return m_CreatedIsSet;
}

void Cart::unsetCreated()
{
    m_CreatedIsSet = false;
}

utility::string_t Cart::getCurrencyCode() const
{
    return m_Currency_code;
}


void Cart::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}
bool Cart::currencyCodeIsSet() const
{
    return m_Currency_codeIsSet;
}

void Cart::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}

double Cart::getDiscountTotal() const
{
    return m_Discount_total;
}


void Cart::setDiscountTotal(double value)
{
    m_Discount_total = value;
    m_Discount_totalIsSet = true;
}
bool Cart::discountTotalIsSet() const
{
    return m_Discount_totalIsSet;
}

void Cart::unsetDiscount_total()
{
    m_Discount_totalIsSet = false;
}

int32_t Cart::getErrorCode() const
{
    return m_Error_code;
}


void Cart::setErrorCode(int32_t value)
{
    m_Error_code = value;
    m_Error_codeIsSet = true;
}
bool Cart::errorCodeIsSet() const
{
    return m_Error_codeIsSet;
}

void Cart::unsetError_code()
{
    m_Error_codeIsSet = false;
}

utility::string_t Cart::getErrorMessage() const
{
    return m_Error_message;
}


void Cart::setErrorMessage(utility::string_t value)
{
    m_Error_message = value;
    m_Error_messageIsSet = true;
}
bool Cart::errorMessageIsSet() const
{
    return m_Error_messageIsSet;
}

void Cart::unsetError_message()
{
    m_Error_messageIsSet = false;
}

double Cart::getGrandTotal() const
{
    return m_Grand_total;
}


void Cart::setGrandTotal(double value)
{
    m_Grand_total = value;
    m_Grand_totalIsSet = true;
}
bool Cart::grandTotalIsSet() const
{
    return m_Grand_totalIsSet;
}

void Cart::unsetGrand_total()
{
    m_Grand_totalIsSet = false;
}

utility::string_t Cart::getId() const
{
    return m_Id;
}


void Cart::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Cart::idIsSet() const
{
    return m_IdIsSet;
}

void Cart::unsetId()
{
    m_IdIsSet = false;
}

double Cart::getInvoiceId() const
{
    return m_Invoice_id;
}


void Cart::setInvoiceId(double value)
{
    m_Invoice_id = value;
    m_Invoice_idIsSet = true;
}
bool Cart::invoiceIdIsSet() const
{
    return m_Invoice_idIsSet;
}

void Cart::unsetInvoice_id()
{
    m_Invoice_idIsSet = false;
}

std::vector<std::shared_ptr<CartLineItem>>& Cart::getItems()
{
    return m_Items;
}

void Cart::setItems(std::vector<std::shared_ptr<CartLineItem>> value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}
bool Cart::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void Cart::unsetItems()
{
    m_ItemsIsSet = false;
}

int32_t Cart::getOwner() const
{
    return m_Owner;
}


void Cart::setOwner(int32_t value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}
bool Cart::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void Cart::unsetOwner()
{
    m_OwnerIsSet = false;
}

std::vector<std::shared_ptr<CartShippingOption>>& Cart::getSelectedShippingOptions()
{
    return m_Selected_shipping_options;
}

void Cart::setSelectedShippingOptions(std::vector<std::shared_ptr<CartShippingOption>> value)
{
    m_Selected_shipping_options = value;
    m_Selected_shipping_optionsIsSet = true;
}
bool Cart::selectedShippingOptionsIsSet() const
{
    return m_Selected_shipping_optionsIsSet;
}

void Cart::unsetSelected_shipping_options()
{
    m_Selected_shipping_optionsIsSet = false;
}

bool Cart::getShippable() const
{
    return m_Shippable;
}


void Cart::setShippable(bool value)
{
    m_Shippable = value;
    m_ShippableIsSet = true;
}
bool Cart::shippableIsSet() const
{
    return m_ShippableIsSet;
}

void Cart::unsetShippable()
{
    m_ShippableIsSet = false;
}

std::shared_ptr<CartShippingAddressRequest> Cart::getShippingAddress() const
{
    return m_Shipping_address;
}


void Cart::setShippingAddress(std::shared_ptr<CartShippingAddressRequest> value)
{
    m_Shipping_address = value;
    m_Shipping_addressIsSet = true;
}
bool Cart::shippingAddressIsSet() const
{
    return m_Shipping_addressIsSet;
}

void Cart::unsetShipping_address()
{
    m_Shipping_addressIsSet = false;
}

double Cart::getShippingCost() const
{
    return m_Shipping_cost;
}


void Cart::setShippingCost(double value)
{
    m_Shipping_cost = value;
    m_Shipping_costIsSet = true;
}
bool Cart::shippingCostIsSet() const
{
    return m_Shipping_costIsSet;
}

void Cart::unsetShipping_cost()
{
    m_Shipping_costIsSet = false;
}

double Cart::getStateTax() const
{
    return m_State_tax;
}


void Cart::setStateTax(double value)
{
    m_State_tax = value;
    m_State_taxIsSet = true;
}
bool Cart::stateTaxIsSet() const
{
    return m_State_taxIsSet;
}

void Cart::unsetState_tax()
{
    m_State_taxIsSet = false;
}

utility::string_t Cart::getStatus() const
{
    return m_Status;
}


void Cart::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool Cart::statusIsSet() const
{
    return m_StatusIsSet;
}

void Cart::unsetStatus()
{
    m_StatusIsSet = false;
}

double Cart::getSubtotal() const
{
    return m_Subtotal;
}


void Cart::setSubtotal(double value)
{
    m_Subtotal = value;
    m_SubtotalIsSet = true;
}
bool Cart::subtotalIsSet() const
{
    return m_SubtotalIsSet;
}

void Cart::unsetSubtotal()
{
    m_SubtotalIsSet = false;
}

int64_t Cart::getUpdated() const
{
    return m_Updated;
}


void Cart::setUpdated(int64_t value)
{
    m_Updated = value;
    m_UpdatedIsSet = true;
}
bool Cart::updatedIsSet() const
{
    return m_UpdatedIsSet;
}

void Cart::unsetUpdated()
{
    m_UpdatedIsSet = false;
}

}
}
}
}

