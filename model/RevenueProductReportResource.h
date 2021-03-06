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

/*
 * RevenueProductReportResource.h
 *
 * 
 */

#ifndef RevenueProductReportResource_H_
#define RevenueProductReportResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RevenueProductReportResource
    : public ModelBase
{
public:
    RevenueProductReportResource();
    virtual ~RevenueProductReportResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RevenueProductReportResource members

    /// <summary>
    /// 
    /// </summary>
    int32_t getItemId() const;
    bool itemIdIsSet() const;
    void unsetItem_id();
    void setItemId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getItemName() const;
    bool itemNameIsSet() const;
    void unsetItem_name();
    void setItemName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getRevenue() const;
    bool revenueIsSet() const;
    void unsetRevenue();
    void setRevenue(double value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getVolume() const;
    bool volumeIsSet() const;
    void unsetVolume();
    void setVolume(int64_t value);

protected:
    int32_t m_Item_id;
    bool m_Item_idIsSet;
    utility::string_t m_Item_name;
    bool m_Item_nameIsSet;
    double m_Revenue;
    bool m_RevenueIsSet;
    int64_t m_Volume;
    bool m_VolumeIsSet;
};

}
}
}
}

#endif /* RevenueProductReportResource_H_ */
