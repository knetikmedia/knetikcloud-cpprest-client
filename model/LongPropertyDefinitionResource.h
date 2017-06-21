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

/*
 * LongPropertyDefinitionResource.h
 *
 * 
 */

#ifndef LongPropertyDefinitionResource_H_
#define LongPropertyDefinitionResource_H_


#include "ModelBase.h"

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
class  LongPropertyDefinitionResource
    : public ModelBase
{
public:
    LongPropertyDefinitionResource();
    virtual ~LongPropertyDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LongPropertyDefinitionResource members

    /// <summary>
    /// A list of the fields on both the property definition and property of this type
    /// </summary>
    std::shared_ptr<PropertyFieldListResource> getFieldList() const;
    void setFieldList(std::shared_ptr<PropertyFieldListResource> value);
    bool field_listIsSet() const;
    void unsetField_list();
    /// <summary>
    /// The name of the property
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// Whether the property is required
    /// </summary>
    bool getRequired() const;
    void setRequired(bool value);
        /// <summary>
    /// The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties.
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
        /// <summary>
    /// If provided, the maximum value
    /// </summary>
    int64_t getMax() const;
    void setMax(int64_t value);
    bool maxIsSet() const;
    void unsetMax();
    /// <summary>
    /// If provided, the minimum value
    /// </summary>
    int64_t getMin() const;
    void setMin(int64_t value);
    bool minIsSet() const;
    void unsetMin();

protected:
    std::shared_ptr<PropertyFieldListResource> m_Field_list;
    bool m_Field_listIsSet;
utility::string_t m_Name;
    bool m_Required;
    utility::string_t m_Type;
    int64_t m_Max;
    bool m_MaxIsSet;
int64_t m_Min;
    bool m_MinIsSet;
};

}
}
}
}

#endif /* LongPropertyDefinitionResource_H_ */
