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



#include "Collection«Country».h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Collection«Country»::Collection«Country»()
{
    
}

Collection«Country»::~Collection«Country»()
{
}

void Collection«Country»::validate()
{
    // TODO: implement validation
}

web::json::value Collection«Country»::toJson() const
{
    web::json::value val = web::json::value::object();

    

    return val;
}

void Collection«Country»::fromJson(web::json::value& val)
{
    
}

void Collection«Country»::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    
}

void Collection«Country»::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    
}



}
}
}
}

