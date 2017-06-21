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
 * FileGroupPropertyDefinitionResource.h
 *
 * 
 */

#ifndef FileGroupPropertyDefinitionResource_H_
#define FileGroupPropertyDefinitionResource_H_


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
class  FileGroupPropertyDefinitionResource
    : public ModelBase
{
public:
    FileGroupPropertyDefinitionResource();
    virtual ~FileGroupPropertyDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FileGroupPropertyDefinitionResource members

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
    /// If provided, a file type that the property must match
    /// </summary>
    utility::string_t getFileType() const;
    void setFileType(utility::string_t value);
    bool file_typeIsSet() const;
    void unsetFile_type();
    /// <summary>
    /// If provided, the maximum number of files in the group
    /// </summary>
    int32_t getMaxCount() const;
    void setMaxCount(int32_t value);
    bool max_countIsSet() const;
    void unsetMax_count();
    /// <summary>
    /// If provided, the maximum allowed size per file in bytes
    /// </summary>
    int64_t getMaxFileSize() const;
    void setMaxFileSize(int64_t value);
    bool max_file_sizeIsSet() const;
    void unsetMax_file_size();
    /// <summary>
    /// If provided, the minimum number of files in the group
    /// </summary>
    int32_t getMinCount() const;
    void setMinCount(int32_t value);
    bool min_countIsSet() const;
    void unsetMin_count();

protected:
    std::shared_ptr<PropertyFieldListResource> m_Field_list;
    bool m_Field_listIsSet;
utility::string_t m_Name;
    bool m_Required;
    utility::string_t m_Type;
    utility::string_t m_File_type;
    bool m_File_typeIsSet;
int32_t m_Max_count;
    bool m_Max_countIsSet;
int64_t m_Max_file_size;
    bool m_Max_file_sizeIsSet;
int32_t m_Min_count;
    bool m_Min_countIsSet;
};

}
}
}
}

#endif /* FileGroupPropertyDefinitionResource_H_ */
