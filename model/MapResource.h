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
 * MapResource.h
 *
 * 
 */

#ifndef MapResource_H_
#define MapResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include "ExpressionResource.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MapResource
    : public ModelBase
{
public:
    MapResource();
    virtual ~MapResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MapResource members

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<ExpressionResource>>& getMap();
    bool mapIsSet() const;
    void unsetmap();
    void setMap(std::map<utility::string_t, std::shared_ptr<ExpressionResource>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);

protected:
    std::map<utility::string_t, std::shared_ptr<ExpressionResource>> m_map;
    bool m_mapIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};

}
}
}
}

#endif /* MapResource_H_ */