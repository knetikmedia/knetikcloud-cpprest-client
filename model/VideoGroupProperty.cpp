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



#include "VideoGroupProperty.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

VideoGroupProperty::VideoGroupProperty()
{
}

VideoGroupProperty::~VideoGroupProperty()
{
}

void VideoGroupProperty::validate()
{
    // TODO: implement validation
}

web::json::value VideoGroupProperty::toJson() const
{
    web::json::value val = this->FileGroupProperty::toJson();


    return val;
}

void VideoGroupProperty::fromJson(web::json::value& val)
{
    this->FileGroupProperty::fromJson(val);

}

void VideoGroupProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Files )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("files"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
}

void VideoGroupProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    {
        m_Files.clear();
        if(multipart->hasContent(U("files")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("files"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Files.push_back( std::shared_ptr<FileProperty>(nullptr) );
            }
            else
            {
                std::shared_ptr<FileProperty> newItem(new FileProperty());
                newItem->fromJson(item);
                m_Files.push_back( newItem );
            }
        }
        }
    }
}

}
}
}
}

