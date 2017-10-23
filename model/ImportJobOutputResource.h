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
 * ImportJobOutputResource.h
 *
 * 
 */

#ifndef ImportJobOutputResource_H_
#define ImportJobOutputResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ImportJobOutputResource
    : public ModelBase
{
public:
    ImportJobOutputResource();
    virtual ~ImportJobOutputResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ImportJobOutputResource members

    /// <summary>
    /// The description of the import job
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// The line number of the import job
    /// </summary>
    int64_t getLineNumber() const;
    bool lineNumberIsSet() const;
    void unsetLine_number();
    void setLineNumber(int64_t value);

protected:
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    int64_t m_Line_number;
    bool m_Line_numberIsSet;
};

}
}
}
}

#endif /* ImportJobOutputResource_H_ */
