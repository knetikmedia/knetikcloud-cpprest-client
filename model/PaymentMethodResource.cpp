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



#include "PaymentMethodResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PaymentMethodResource::PaymentMethodResource()
{
    m_Created_date = 0L;
    m_Created_dateIsSet = false;
    m_Default = false;
    m_DefaultIsSet = false;
    m_Disabled = false;
    m_DisabledIsSet = false;
    m_Expiration_date = 0L;
    m_Expiration_dateIsSet = false;
    m_Expiration_month = 0;
    m_Expiration_monthIsSet = false;
    m_Expiration_year = 0;
    m_Expiration_yearIsSet = false;
    m_Id = 0L;
    m_IdIsSet = false;
    m_Last4 = U("");
    m_Last4IsSet = false;
    m_Name = U("");
    m_Payment_type = U("");
    m_Payment_typeIsSet = false;
    m_Sort = 0;
    m_SortIsSet = false;
    m_Token = U("");
    m_TokenIsSet = false;
    m_Unique_key = U("");
    m_Unique_keyIsSet = false;
    m_Updated_date = 0L;
    m_Updated_dateIsSet = false;
    m_User_id = 0;
    m_User_idIsSet = false;
    m_Verified = false;
    m_VerifiedIsSet = false;
}

PaymentMethodResource::~PaymentMethodResource()
{
}

void PaymentMethodResource::validate()
{
    // TODO: implement validation
}

web::json::value PaymentMethodResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    if(m_DefaultIsSet)
    {
        val[U("default")] = ModelBase::toJson(m_Default);
    }
    if(m_DisabledIsSet)
    {
        val[U("disabled")] = ModelBase::toJson(m_Disabled);
    }
    if(m_Expiration_dateIsSet)
    {
        val[U("expiration_date")] = ModelBase::toJson(m_Expiration_date);
    }
    if(m_Expiration_monthIsSet)
    {
        val[U("expiration_month")] = ModelBase::toJson(m_Expiration_month);
    }
    if(m_Expiration_yearIsSet)
    {
        val[U("expiration_year")] = ModelBase::toJson(m_Expiration_year);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Last4IsSet)
    {
        val[U("last4")] = ModelBase::toJson(m_Last4);
    }
    val[U("name")] = ModelBase::toJson(m_Name);
    val[U("payment_method_type")] = ModelBase::toJson(m_Payment_method_type);
    if(m_Payment_typeIsSet)
    {
        val[U("payment_type")] = ModelBase::toJson(m_Payment_type);
    }
    if(m_SortIsSet)
    {
        val[U("sort")] = ModelBase::toJson(m_Sort);
    }
    if(m_TokenIsSet)
    {
        val[U("token")] = ModelBase::toJson(m_Token);
    }
    if(m_Unique_keyIsSet)
    {
        val[U("unique_key")] = ModelBase::toJson(m_Unique_key);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    if(m_User_idIsSet)
    {
        val[U("user_id")] = ModelBase::toJson(m_User_id);
    }
    if(m_VerifiedIsSet)
    {
        val[U("verified")] = ModelBase::toJson(m_Verified);
    }

    return val;
}

void PaymentMethodResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    if(val.has_field(U("default")))
    {
        setDefault(ModelBase::boolFromJson(val[U("default")]));
    }
    if(val.has_field(U("disabled")))
    {
        setDisabled(ModelBase::boolFromJson(val[U("disabled")]));
    }
    if(val.has_field(U("expiration_date")))
    {
        setExpirationDate(ModelBase::int64_tFromJson(val[U("expiration_date")]));
    }
    if(val.has_field(U("expiration_month")))
    {
        setExpirationMonth(ModelBase::int32_tFromJson(val[U("expiration_month")]));
    }
    if(val.has_field(U("expiration_year")))
    {
        setExpirationYear(ModelBase::int32_tFromJson(val[U("expiration_year")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::int64_tFromJson(val[U("id")]));
    }
    if(val.has_field(U("last4")))
    {
        setLast4(ModelBase::stringFromJson(val[U("last4")]));
    }
    setName(ModelBase::stringFromJson(val[U("name")]));
    std::shared_ptr<PaymentMethodTypeResource> newPayment_method_type(new PaymentMethodTypeResource());
    newPayment_method_type->fromJson(val[U("payment_method_type")]);
    setPaymentMethodType( newPayment_method_type );
    if(val.has_field(U("payment_type")))
    {
        setPaymentType(ModelBase::stringFromJson(val[U("payment_type")]));
    }
    if(val.has_field(U("sort")))
    {
        setSort(ModelBase::int32_tFromJson(val[U("sort")]));
    }
    if(val.has_field(U("token")))
    {
        setToken(ModelBase::stringFromJson(val[U("token")]));
    }
    if(val.has_field(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromJson(val[U("unique_key")]));
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    if(val.has_field(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromJson(val[U("user_id")]));
    }
    if(val.has_field(U("verified")))
    {
        setVerified(ModelBase::boolFromJson(val[U("verified")]));
    }
}

void PaymentMethodResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("default"), m_Default));
    }
    if(m_DisabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("disabled"), m_Disabled));
    }
    if(m_Expiration_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expiration_date"), m_Expiration_date));
    }
    if(m_Expiration_monthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expiration_month"), m_Expiration_month));
    }
    if(m_Expiration_yearIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expiration_year"), m_Expiration_year));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
    }
    if(m_Last4IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("last4"), m_Last4));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    m_Payment_method_type->toMultipart(multipart, U("payment_method_type."));
    if(m_Payment_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("payment_type"), m_Payment_type));
        
    }
    if(m_SortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sort"), m_Sort));
    }
    if(m_TokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("token"), m_Token));
        
    }
    if(m_Unique_keyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("unique_key"), m_Unique_key));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("user_id"), m_User_id));
    }
    if(m_VerifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("verified"), m_Verified));
    }
}

void PaymentMethodResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("default")))
    {
        setDefault(ModelBase::boolFromHttpContent(multipart->getContent(U("default"))));
    }
    if(multipart->hasContent(U("disabled")))
    {
        setDisabled(ModelBase::boolFromHttpContent(multipart->getContent(U("disabled"))));
    }
    if(multipart->hasContent(U("expiration_date")))
    {
        setExpirationDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("expiration_date"))));
    }
    if(multipart->hasContent(U("expiration_month")))
    {
        setExpirationMonth(ModelBase::int32_tFromHttpContent(multipart->getContent(U("expiration_month"))));
    }
    if(multipart->hasContent(U("expiration_year")))
    {
        setExpirationYear(ModelBase::int32_tFromHttpContent(multipart->getContent(U("expiration_year"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("last4")))
    {
        setLast4(ModelBase::stringFromHttpContent(multipart->getContent(U("last4"))));
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    std::shared_ptr<PaymentMethodTypeResource> newPayment_method_type(new PaymentMethodTypeResource());
    newPayment_method_type->fromMultiPart(multipart, U("payment_method_type."));
    setPaymentMethodType( newPayment_method_type );
    if(multipart->hasContent(U("payment_type")))
    {
        setPaymentType(ModelBase::stringFromHttpContent(multipart->getContent(U("payment_type"))));
    }
    if(multipart->hasContent(U("sort")))
    {
        setSort(ModelBase::int32_tFromHttpContent(multipart->getContent(U("sort"))));
    }
    if(multipart->hasContent(U("token")))
    {
        setToken(ModelBase::stringFromHttpContent(multipart->getContent(U("token"))));
    }
    if(multipart->hasContent(U("unique_key")))
    {
        setUniqueKey(ModelBase::stringFromHttpContent(multipart->getContent(U("unique_key"))));
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    if(multipart->hasContent(U("user_id")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("user_id"))));
    }
    if(multipart->hasContent(U("verified")))
    {
        setVerified(ModelBase::boolFromHttpContent(multipart->getContent(U("verified"))));
    }
}

int64_t PaymentMethodResource::getCreatedDate() const
{
    return m_Created_date;
}


void PaymentMethodResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool PaymentMethodResource::createdDateIsSet() const
{
    return m_Created_dateIsSet;
}

void PaymentMethodResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}

bool PaymentMethodResource::getDefault() const
{
    return m_Default;
}


void PaymentMethodResource::setDefault(bool value)
{
    m_Default = value;
    m_DefaultIsSet = true;
}
bool PaymentMethodResource::defaultIsSet() const
{
    return m_DefaultIsSet;
}

void PaymentMethodResource::unsetDefault()
{
    m_DefaultIsSet = false;
}

bool PaymentMethodResource::getDisabled() const
{
    return m_Disabled;
}


void PaymentMethodResource::setDisabled(bool value)
{
    m_Disabled = value;
    m_DisabledIsSet = true;
}
bool PaymentMethodResource::disabledIsSet() const
{
    return m_DisabledIsSet;
}

void PaymentMethodResource::unsetDisabled()
{
    m_DisabledIsSet = false;
}

int64_t PaymentMethodResource::getExpirationDate() const
{
    return m_Expiration_date;
}


void PaymentMethodResource::setExpirationDate(int64_t value)
{
    m_Expiration_date = value;
    m_Expiration_dateIsSet = true;
}
bool PaymentMethodResource::expirationDateIsSet() const
{
    return m_Expiration_dateIsSet;
}

void PaymentMethodResource::unsetExpiration_date()
{
    m_Expiration_dateIsSet = false;
}

int32_t PaymentMethodResource::getExpirationMonth() const
{
    return m_Expiration_month;
}


void PaymentMethodResource::setExpirationMonth(int32_t value)
{
    m_Expiration_month = value;
    m_Expiration_monthIsSet = true;
}
bool PaymentMethodResource::expirationMonthIsSet() const
{
    return m_Expiration_monthIsSet;
}

void PaymentMethodResource::unsetExpiration_month()
{
    m_Expiration_monthIsSet = false;
}

int32_t PaymentMethodResource::getExpirationYear() const
{
    return m_Expiration_year;
}


void PaymentMethodResource::setExpirationYear(int32_t value)
{
    m_Expiration_year = value;
    m_Expiration_yearIsSet = true;
}
bool PaymentMethodResource::expirationYearIsSet() const
{
    return m_Expiration_yearIsSet;
}

void PaymentMethodResource::unsetExpiration_year()
{
    m_Expiration_yearIsSet = false;
}

int64_t PaymentMethodResource::getId() const
{
    return m_Id;
}


void PaymentMethodResource::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PaymentMethodResource::idIsSet() const
{
    return m_IdIsSet;
}

void PaymentMethodResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t PaymentMethodResource::getLast4() const
{
    return m_Last4;
}


void PaymentMethodResource::setLast4(utility::string_t value)
{
    m_Last4 = value;
    m_Last4IsSet = true;
}
bool PaymentMethodResource::last4IsSet() const
{
    return m_Last4IsSet;
}

void PaymentMethodResource::unsetLast4()
{
    m_Last4IsSet = false;
}

utility::string_t PaymentMethodResource::getName() const
{
    return m_Name;
}


void PaymentMethodResource::setName(utility::string_t value)
{
    m_Name = value;
    
}
std::shared_ptr<PaymentMethodTypeResource> PaymentMethodResource::getPaymentMethodType() const
{
    return m_Payment_method_type;
}


void PaymentMethodResource::setPaymentMethodType(std::shared_ptr<PaymentMethodTypeResource> value)
{
    m_Payment_method_type = value;
    
}
utility::string_t PaymentMethodResource::getPaymentType() const
{
    return m_Payment_type;
}


void PaymentMethodResource::setPaymentType(utility::string_t value)
{
    m_Payment_type = value;
    m_Payment_typeIsSet = true;
}
bool PaymentMethodResource::paymentTypeIsSet() const
{
    return m_Payment_typeIsSet;
}

void PaymentMethodResource::unsetPayment_type()
{
    m_Payment_typeIsSet = false;
}

int32_t PaymentMethodResource::getSort() const
{
    return m_Sort;
}


void PaymentMethodResource::setSort(int32_t value)
{
    m_Sort = value;
    m_SortIsSet = true;
}
bool PaymentMethodResource::sortIsSet() const
{
    return m_SortIsSet;
}

void PaymentMethodResource::unsetSort()
{
    m_SortIsSet = false;
}

utility::string_t PaymentMethodResource::getToken() const
{
    return m_Token;
}


void PaymentMethodResource::setToken(utility::string_t value)
{
    m_Token = value;
    m_TokenIsSet = true;
}
bool PaymentMethodResource::tokenIsSet() const
{
    return m_TokenIsSet;
}

void PaymentMethodResource::unsetToken()
{
    m_TokenIsSet = false;
}

utility::string_t PaymentMethodResource::getUniqueKey() const
{
    return m_Unique_key;
}


void PaymentMethodResource::setUniqueKey(utility::string_t value)
{
    m_Unique_key = value;
    m_Unique_keyIsSet = true;
}
bool PaymentMethodResource::uniqueKeyIsSet() const
{
    return m_Unique_keyIsSet;
}

void PaymentMethodResource::unsetUnique_key()
{
    m_Unique_keyIsSet = false;
}

int64_t PaymentMethodResource::getUpdatedDate() const
{
    return m_Updated_date;
}


void PaymentMethodResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool PaymentMethodResource::updatedDateIsSet() const
{
    return m_Updated_dateIsSet;
}

void PaymentMethodResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}

int32_t PaymentMethodResource::getUserId() const
{
    return m_User_id;
}


void PaymentMethodResource::setUserId(int32_t value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool PaymentMethodResource::userIdIsSet() const
{
    return m_User_idIsSet;
}

void PaymentMethodResource::unsetUser_id()
{
    m_User_idIsSet = false;
}

bool PaymentMethodResource::getVerified() const
{
    return m_Verified;
}


void PaymentMethodResource::setVerified(bool value)
{
    m_Verified = value;
    m_VerifiedIsSet = true;
}
bool PaymentMethodResource::verifiedIsSet() const
{
    return m_VerifiedIsSet;
}

void PaymentMethodResource::unsetVerified()
{
    m_VerifiedIsSet = false;
}

}
}
}
}

