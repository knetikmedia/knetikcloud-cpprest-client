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
 * ListPropertyDefinitionResource.h
 *
 * 
 */

#ifndef ListPropertyDefinitionResource_H_
#define ListPropertyDefinitionResource_H_


#include "PropertyFieldListResource.h"
#include <cpprest/details/basic_types.h>
#include "PropertyDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ListPropertyDefinitionResource
    : public PropertyDefinitionResource
{
public:
    ListPropertyDefinitionResource();
    virtual ~ListPropertyDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ListPropertyDefinitionResource members

    /// <summary>
    /// If provided, the maximum number of files in the group
    /// </summary>
    int32_t getMaxCount() const;
    bool maxCountIsSet() const;
    void unsetMax_count();
    void setMaxCount(int32_t value);
    /// <summary>
    /// If provided, the minimum number of files in the group
    /// </summary>
    int32_t getMinCount() const;
    bool minCountIsSet() const;
    void unsetMin_count();
    void setMinCount(int32_t value);
    /// <summary>
    /// If provided, a property definition for validating values within list
    /// </summary>
    std::shared_ptr<PropertyDefinitionResource> getValueDefinition() const;
    bool valueDefinitionIsSet() const;
    void unsetValue_definition();
    void setValueDefinition(std::shared_ptr<PropertyDefinitionResource> value);

protected:
    int32_t m_Max_count;
    bool m_Max_countIsSet;
    int32_t m_Min_count;
    bool m_Min_countIsSet;
    std::shared_ptr<PropertyDefinitionResource> m_Value_definition;
    bool m_Value_definitionIsSet;
};

}
}
}
}

#endif /* ListPropertyDefinitionResource_H_ */
