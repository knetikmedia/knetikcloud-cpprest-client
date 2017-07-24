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



#include "NewCustomerEvent.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

NewCustomerEvent::NewCustomerEvent()
{
    m_Customer_configIsSet = false;
}

NewCustomerEvent::~NewCustomerEvent()
{
}

void NewCustomerEvent::validate()
{
    // TODO: implement validation
}

web::json::value NewCustomerEvent::toJson() const
{
    web::json::value val = this->BroadcastableEvent::toJson();

    if(m_Customer_configIsSet)
    {
        val[U("customer_config")] = ModelBase::toJson(m_Customer_config);
    }

    return val;
}

void NewCustomerEvent::fromJson(web::json::value& val)
{
    this->BroadcastableEvent::fromJson(val);

    if(val.has_field(U("customer_config")))
    {
        if(!val[U("customer_config")].is_null())
        {
            std::shared_ptr<CustomerConfig> newItem(new CustomerConfig());
            newItem->fromJson(val[U("customer_config")]);
            setCustomerConfig( newItem );
        }
    }
}

void NewCustomerEvent::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_ClientIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("client"), m_Client));
        
    }
    if(m_CustomerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("customer"), m_Customer));
        
    }
    if(m_Do_not_broadcastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("do_not_broadcast"), m_Do_not_broadcast));
    }
    if(m_SectionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("section"), m_Section));
        
    }
    if(m_SourceIsSet)
    {
        if (m_Source.get())
        {
            m_Source->toMultipart(multipart, U("source."));
        }
        
    }
    if(m_SpecificsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("specifics"), m_Specifics));
        
    }
    if(m_SynchronousIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("synchronous"), m_Synchronous));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("timestamp"), m_Timestamp));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_Customer_configIsSet)
    {
        if (m_Customer_config.get())
        {
            m_Customer_config->toMultipart(multipart, U("customer_config."));
        }
        
    }
}

void NewCustomerEvent::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("client")))
    {
        setClient(ModelBase::stringFromHttpContent(multipart->getContent(U("client"))));
    }
    if(multipart->hasContent(U("customer")))
    {
        setCustomer(ModelBase::stringFromHttpContent(multipart->getContent(U("customer"))));
    }
    if(multipart->hasContent(U("do_not_broadcast")))
    {
        setDoNotBroadcast(ModelBase::boolFromHttpContent(multipart->getContent(U("do_not_broadcast"))));
    }
    if(multipart->hasContent(U("section")))
    {
        setSection(ModelBase::stringFromHttpContent(multipart->getContent(U("section"))));
    }
    if(multipart->hasContent(U("source")))
    {
        if(multipart->hasContent(U("source")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, U("source."));
            setSource( newItem );
        }
    }
    if(multipart->hasContent(U("specifics")))
    {
        setSpecifics(ModelBase::stringFromHttpContent(multipart->getContent(U("specifics"))));
    }
    if(multipart->hasContent(U("synchronous")))
    {
        setSynchronous(ModelBase::boolFromHttpContent(multipart->getContent(U("synchronous"))));
    }
    if(multipart->hasContent(U("timestamp")))
    {
        setTimestamp(ModelBase::int64_tFromHttpContent(multipart->getContent(U("timestamp"))));
    }
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("customer_config")))
    {
        if(multipart->hasContent(U("customer_config")))
        {
            std::shared_ptr<CustomerConfig> newItem(new CustomerConfig());
            newItem->fromMultiPart(multipart, U("customer_config."));
            setCustomerConfig( newItem );
        }
    }
}

std::shared_ptr<CustomerConfig> NewCustomerEvent::getCustomerConfig() const
{
    return m_Customer_config;
}


void NewCustomerEvent::setCustomerConfig(std::shared_ptr<CustomerConfig> value)
{
    m_Customer_config = value;
    m_Customer_configIsSet = true;
}
bool NewCustomerEvent::customerConfigIsSet() const
{
    return m_Customer_configIsSet;
}

void NewCustomerEvent::unsetCustomer_config()
{
    m_Customer_configIsSet = false;
}

}
}
}
}

