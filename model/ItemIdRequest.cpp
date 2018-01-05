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



#include "ItemIdRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

ItemIdRequest::ItemIdRequest()
{
    m_Item_id = 0;
    m_Item_idIsSet = false;
}

ItemIdRequest::~ItemIdRequest()
{
}

void ItemIdRequest::validate()
{
    // TODO: implement validation
}

web::json::value ItemIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Item_idIsSet)
    {
        val[U("item_id")] = ModelBase::toJson(m_Item_id);
    }

    return val;
}

void ItemIdRequest::fromJson(web::json::value& val)
{
    if(val.has_field(U("item_id")))
    {
        setItemId(ModelBase::int32_tFromJson(val[U("item_id")]));
    }
}

void ItemIdRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("item_id"), m_Item_id));
    }
}

void ItemIdRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("item_id")))
    {
        setItemId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("item_id"))));
    }
}

int32_t ItemIdRequest::getItemId() const
{
    return m_Item_id;
}


void ItemIdRequest::setItemId(int32_t value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}
bool ItemIdRequest::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void ItemIdRequest::unsetItem_id()
{
    m_Item_idIsSet = false;
}

}
}
}
}
