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



#include "Spendable.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

Spendable::Spendable()
{
    m_Currency_code = U("");
    m_Currency_codeIsSet = false;
    m_Value = 0;
    m_ValueIsSet = false;
}

Spendable::~Spendable()
{
}

void Spendable::validate()
{
    // TODO: implement validation
}

web::json::value Spendable::toJson() const
{
    web::json::value val = this->Behavior::toJson();

    if(m_Currency_codeIsSet)
    {
        val[U("currency_code")] = ModelBase::toJson(m_Currency_code);
    }
    if(m_ValueIsSet)
    {
        val[U("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void Spendable::fromJson(web::json::value& val)
{
    this->Behavior::fromJson(val);

    if(val.has_field(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromJson(val[U("currency_code")]));
    }
    if(val.has_field(U("value")))
    {
        setValue(ModelBase::int32_tFromJson(val[U("value")]));
    }
}

void Spendable::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_Type_hintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("type_hint"), m_Type_hint));
        
    }
    if(m_Currency_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("currency_code"), m_Currency_code));
        
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("value"), m_Value));
    }
}

void Spendable::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    if(multipart->hasContent(U("type_hint")))
    {
        setTypeHint(ModelBase::stringFromHttpContent(multipart->getContent(U("type_hint"))));
    }
    if(multipart->hasContent(U("currency_code")))
    {
        setCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(U("currency_code"))));
    }
    if(multipart->hasContent(U("value")))
    {
        setValue(ModelBase::int32_tFromHttpContent(multipart->getContent(U("value"))));
    }
}

utility::string_t Spendable::getCurrencyCode() const
{
    return m_Currency_code;
}


void Spendable::setCurrencyCode(utility::string_t value)
{
    m_Currency_code = value;
    m_Currency_codeIsSet = true;
}
bool Spendable::currencyCodeIsSet() const
{
    return m_Currency_codeIsSet;
}

void Spendable::unsetCurrency_code()
{
    m_Currency_codeIsSet = false;
}

int32_t Spendable::getValue() const
{
    return m_Value;
}


void Spendable::setValue(int32_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool Spendable::valueIsSet() const
{
    return m_ValueIsSet;
}

void Spendable::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

