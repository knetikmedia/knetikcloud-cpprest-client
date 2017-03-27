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



#include "SampleCountriesResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SampleCountriesResponse::SampleCountriesResponse()
{
    m_Vendor_id1IsSet = false;
    m_Vendor_id2IsSet = false;
    
}

SampleCountriesResponse::~SampleCountriesResponse()
{
}

void SampleCountriesResponse::validate()
{
    // TODO: implement validation
}

web::json::value SampleCountriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Vendor_id1 )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("vendor_id1")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Vendor_id2 )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("vendor_id2")] = web::json::value::array(jsonArray);
        }
    }
    

    return val;
}

void SampleCountriesResponse::fromJson(web::json::value& val)
{
    {
        m_Vendor_id1.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("vendor_id1")))
        {
        for( auto& item : val[U("vendor_id1")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Vendor_id1.push_back( std::shared_ptr<Country>(nullptr) );
            }
            else
            {
                std::shared_ptr<Country> newItem(new Country());
                newItem->fromJson(item);
                m_Vendor_id1.push_back( newItem );
            }
            
        }
        }
    }
    {
        m_Vendor_id2.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("vendor_id2")))
        {
        for( auto& item : val[U("vendor_id2")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Vendor_id2.push_back( std::shared_ptr<Country>(nullptr) );
            }
            else
            {
                std::shared_ptr<Country> newItem(new Country());
                newItem->fromJson(item);
                m_Vendor_id2.push_back( newItem );
            }
            
        }
        }
    }
    
}

void SampleCountriesResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Vendor_id1 )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor_id1"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Vendor_id2 )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor_id2"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    
}

void SampleCountriesResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Vendor_id1.clear();
        if(multipart->hasContent(U("vendor_id1")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("vendor_id1"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Vendor_id1.push_back( std::shared_ptr<Country>(nullptr) );
            }
            else
            {
                std::shared_ptr<Country> newItem(new Country());
                newItem->fromJson(item);
                m_Vendor_id1.push_back( newItem );
            }
            
        }
        }
    }
    {
        m_Vendor_id2.clear();
        if(multipart->hasContent(U("vendor_id2")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("vendor_id2"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Vendor_id2.push_back( std::shared_ptr<Country>(nullptr) );
            }
            else
            {
                std::shared_ptr<Country> newItem(new Country());
                newItem->fromJson(item);
                m_Vendor_id2.push_back( newItem );
            }
            
        }
        }
    }
    
}


std::vector<std::shared_ptr<Country>>& SampleCountriesResponse::getVendorId1()
{
    return m_Vendor_id1;
}
bool SampleCountriesResponse::vendor_id1IsSet() const
{
    return m_Vendor_id1IsSet;
}
void SampleCountriesResponse::unsetVendor_id1()
{
    m_Vendor_id1IsSet = false;
}
std::vector<std::shared_ptr<Country>>& SampleCountriesResponse::getVendorId2()
{
    return m_Vendor_id2;
}
bool SampleCountriesResponse::vendor_id2IsSet() const
{
    return m_Vendor_id2IsSet;
}
void SampleCountriesResponse::unsetVendor_id2()
{
    m_Vendor_id2IsSet = false;
}

}
}
}
}

