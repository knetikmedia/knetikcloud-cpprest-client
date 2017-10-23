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



#include "RevenueProductReportResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

RevenueProductReportResource::RevenueProductReportResource()
{
    m_Item_id = 0;
    m_Item_idIsSet = false;
    m_Item_name = U("");
    m_Item_nameIsSet = false;
    m_Revenue = 0.0;
    m_RevenueIsSet = false;
    m_Volume = 0L;
    m_VolumeIsSet = false;
}

RevenueProductReportResource::~RevenueProductReportResource()
{
}

void RevenueProductReportResource::validate()
{
    // TODO: implement validation
}

web::json::value RevenueProductReportResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Item_idIsSet)
    {
        val[U("item_id")] = ModelBase::toJson(m_Item_id);
    }
    if(m_Item_nameIsSet)
    {
        val[U("item_name")] = ModelBase::toJson(m_Item_name);
    }
    if(m_RevenueIsSet)
    {
        val[U("revenue")] = ModelBase::toJson(m_Revenue);
    }
    if(m_VolumeIsSet)
    {
        val[U("volume")] = ModelBase::toJson(m_Volume);
    }

    return val;
}

void RevenueProductReportResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("item_id")))
    {
        setItemId(ModelBase::int32_tFromJson(val[U("item_id")]));
    }
    if(val.has_field(U("item_name")))
    {
        setItemName(ModelBase::stringFromJson(val[U("item_name")]));
    }
    if(val.has_field(U("revenue")))
    {
        setRevenue(ModelBase::doubleFromJson(val[U("revenue")]));
    }
    if(val.has_field(U("volume")))
    {
        setVolume(ModelBase::int64_tFromJson(val[U("volume")]));
    }
}

void RevenueProductReportResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Item_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("item_name"), m_Item_name));
        
    }
    if(m_RevenueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("revenue"), m_Revenue));
    }
    if(m_VolumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("volume"), m_Volume));
    }
}

void RevenueProductReportResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("item_name")))
    {
        setItemName(ModelBase::stringFromHttpContent(multipart->getContent(U("item_name"))));
    }
    if(multipart->hasContent(U("revenue")))
    {
        setRevenue(ModelBase::doubleFromHttpContent(multipart->getContent(U("revenue"))));
    }
    if(multipart->hasContent(U("volume")))
    {
        setVolume(ModelBase::int64_tFromHttpContent(multipart->getContent(U("volume"))));
    }
}

int32_t RevenueProductReportResource::getItemId() const
{
    return m_Item_id;
}


void RevenueProductReportResource::setItemId(int32_t value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}
bool RevenueProductReportResource::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void RevenueProductReportResource::unsetItem_id()
{
    m_Item_idIsSet = false;
}

utility::string_t RevenueProductReportResource::getItemName() const
{
    return m_Item_name;
}


void RevenueProductReportResource::setItemName(utility::string_t value)
{
    m_Item_name = value;
    m_Item_nameIsSet = true;
}
bool RevenueProductReportResource::itemNameIsSet() const
{
    return m_Item_nameIsSet;
}

void RevenueProductReportResource::unsetItem_name()
{
    m_Item_nameIsSet = false;
}

double RevenueProductReportResource::getRevenue() const
{
    return m_Revenue;
}


void RevenueProductReportResource::setRevenue(double value)
{
    m_Revenue = value;
    m_RevenueIsSet = true;
}
bool RevenueProductReportResource::revenueIsSet() const
{
    return m_RevenueIsSet;
}

void RevenueProductReportResource::unsetRevenue()
{
    m_RevenueIsSet = false;
}

int64_t RevenueProductReportResource::getVolume() const
{
    return m_Volume;
}


void RevenueProductReportResource::setVolume(int64_t value)
{
    m_Volume = value;
    m_VolumeIsSet = true;
}
bool RevenueProductReportResource::volumeIsSet() const
{
    return m_VolumeIsSet;
}

void RevenueProductReportResource::unsetVolume()
{
    m_VolumeIsSet = false;
}

}
}
}
}

