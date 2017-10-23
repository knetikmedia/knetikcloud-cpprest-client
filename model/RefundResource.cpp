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



#include "RefundResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

RefundResource::RefundResource()
{
    m_Amount = 0.0;
    m_AmountIsSet = false;
    m_Refund_transaction_id = 0;
    m_Refund_transaction_idIsSet = false;
    m_Transaction_id = 0;
    m_Transaction_idIsSet = false;
}

RefundResource::~RefundResource()
{
}

void RefundResource::validate()
{
    // TODO: implement validation
}

web::json::value RefundResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AmountIsSet)
    {
        val[U("amount")] = ModelBase::toJson(m_Amount);
    }
    if(m_Refund_transaction_idIsSet)
    {
        val[U("refund_transaction_id")] = ModelBase::toJson(m_Refund_transaction_id);
    }
    if(m_Transaction_idIsSet)
    {
        val[U("transaction_id")] = ModelBase::toJson(m_Transaction_id);
    }

    return val;
}

void RefundResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("amount")))
    {
        setAmount(ModelBase::doubleFromJson(val[U("amount")]));
    }
    if(val.has_field(U("refund_transaction_id")))
    {
        setRefundTransactionId(ModelBase::int32_tFromJson(val[U("refund_transaction_id")]));
    }
    if(val.has_field(U("transaction_id")))
    {
        setTransactionId(ModelBase::int32_tFromJson(val[U("transaction_id")]));
    }
}

void RefundResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("amount"), m_Amount));
    }
    if(m_Refund_transaction_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("refund_transaction_id"), m_Refund_transaction_id));
    }
    if(m_Transaction_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("transaction_id"), m_Transaction_id));
    }
}

void RefundResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("amount")))
    {
        setAmount(ModelBase::doubleFromHttpContent(multipart->getContent(U("amount"))));
    }
    if(multipart->hasContent(U("refund_transaction_id")))
    {
        setRefundTransactionId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("refund_transaction_id"))));
    }
    if(multipart->hasContent(U("transaction_id")))
    {
        setTransactionId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("transaction_id"))));
    }
}

double RefundResource::getAmount() const
{
    return m_Amount;
}


void RefundResource::setAmount(double value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}
bool RefundResource::amountIsSet() const
{
    return m_AmountIsSet;
}

void RefundResource::unsetAmount()
{
    m_AmountIsSet = false;
}

int32_t RefundResource::getRefundTransactionId() const
{
    return m_Refund_transaction_id;
}


void RefundResource::setRefundTransactionId(int32_t value)
{
    m_Refund_transaction_id = value;
    m_Refund_transaction_idIsSet = true;
}
bool RefundResource::refundTransactionIdIsSet() const
{
    return m_Refund_transaction_idIsSet;
}

void RefundResource::unsetRefund_transaction_id()
{
    m_Refund_transaction_idIsSet = false;
}

int32_t RefundResource::getTransactionId() const
{
    return m_Transaction_id;
}


void RefundResource::setTransactionId(int32_t value)
{
    m_Transaction_id = value;
    m_Transaction_idIsSet = true;
}
bool RefundResource::transactionIdIsSet() const
{
    return m_Transaction_idIsSet;
}

void RefundResource::unsetTransaction_id()
{
    m_Transaction_idIsSet = false;
}

}
}
}
}

