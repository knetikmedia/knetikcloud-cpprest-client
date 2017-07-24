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



#include "CartSummary.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

CartSummary::CartSummary()
{
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Currency_code = U("");
    m_Currency_codeIsSet = false;
    m_Grand_total = 0.0;
    m_Grand_totalIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Invoice_id = 0.0;
    m_Invoice_idIsSet = false;
    m_Items_in_cart = 0;
    m_Items_in_cartIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_Subtotal = 0.0;
    m_SubtotalIsSet = false;
}

CartSummary::~CartSummary()
{
}

void CartSummary::validate()
{
    // TODO: implement validation
}

web::json::value CartSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_Currency_codeIsSet)
    {
        val[U("currency_code")] = ModelBase::toJson(m_Currency_code);
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
    if(m_Items_in_cartIsSet)
    {
        val[U("items_in_cart")] = ModelBase::toJson(m_Items_in_cart);
    }
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    if(m_SubtotalIsSet)
    {
        val[U("subtotal")] = ModelBase::toJson(m_Subtotal);
    }

    return val;
}

void CartSummary::fromJson(web::json::value& val)
{
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
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
    if(val.has_field(U("items_in_cart")))
    {
        setItemsInCart(ModelBase::int32_tFromJson(val[U("items_in_cart")]));
    }
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
    }
    if(val.has_field(U("subtotal")))
    {
        setSubtotal(ModelBase::doubleFromJson(val[U("subtotal")]));
    }
}

void CartSummary::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    if(m_Currency_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_code"), m_Currency_code));
        
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
    if(m_Items_in_cartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("items_in_cart"), m_Items_in_cart));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
        
    }
    if(m_SubtotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("subtotal"), m_Subtotal));
    }
}

void CartSummary::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    if(multipart->hasContent(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_code"))));
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
    if(multipart->hasContent(U("items_in_cart")))
    {
        setItemsInCart(ModelBase::int32_tFromHttpContent(multipart->getContent(U("items_in_cart"))));
    }
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
    }
    if(multipart->hasContent(U("subtotal")))
    {
        setSubtotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("subtotal"))));
    }
}

int64_t CartSummary::getCreatedDate() const
{
    return m_Created_date;
}


void CartSummary::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool CartSummary::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void CartSummary::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

utility::string_t CartSummary::getCurrencyCode() const
{
    return m_Currency_code;
}


void CartSummary::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}
bool CartSummary::currencyCodeIsSet() const
{
    return m_Currency_codeIsSet;
}

void CartSummary::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}

double CartSummary::getGrandTotal() const
{
    return m_Grand_total;
}


void CartSummary::setGrandTotal(double value)
{
    m_Grand_total = value;
    m_Grand_totalIsSet = true;
}
bool CartSummary::grandTotalIsSet() const
{
    return m_Grand_totalIsSet;
}

void CartSummary::unsetGrand_total()
{
    m_Grand_totalIsSet = false;
}

utility::string_t CartSummary::getId() const
{
    return m_Id;
}


void CartSummary::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool CartSummary::idIsSet() const
{
    return m_IdIsSet;
}

void CartSummary::unsetId()
{
    m_IdIsSet = false;
}

double CartSummary::getInvoiceId() const
{
    return m_Invoice_id;
}


void CartSummary::setInvoiceId(double value)
{
    m_Invoice_id = value;
    m_Invoice_idIsSet = true;
}
bool CartSummary::invoiceIdIsSet() const
{
    return m_Invoice_idIsSet;
}

void CartSummary::unsetInvoice_id()
{
    m_Invoice_idIsSet = false;
}

int32_t CartSummary::getItemsInCart() const
{
    return m_Items_in_cart;
}


void CartSummary::setItemsInCart(int32_t value)
{
    m_Items_in_cart = value;
    m_Items_in_cartIsSet = true;
}
bool CartSummary::itemsInCartIsSet() const
{
    return m_Items_in_cartIsSet;
}

void CartSummary::unsetItems_in_cart()
{
    m_Items_in_cartIsSet = false;
}

utility::string_t CartSummary::getStatus() const
{
    return m_Status;
}


void CartSummary::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool CartSummary::statusIsSet() const
{
    return m_StatusIsSet;
}

void CartSummary::unsetStatus()
{
    m_StatusIsSet = false;
}

double CartSummary::getSubtotal() const
{
    return m_Subtotal;
}


void CartSummary::setSubtotal(double value)
{
    m_Subtotal = value;
    m_SubtotalIsSet = true;
}
bool CartSummary::subtotalIsSet() const
{
    return m_SubtotalIsSet;
}

void CartSummary::unsetSubtotal()
{
    m_SubtotalIsSet = false;
}

}
}
}
}

