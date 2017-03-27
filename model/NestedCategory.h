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
 * NestedCategory.h
 *
 * 
 */

#ifndef NestedCategory_H_
#define NestedCategory_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  NestedCategory
    : public ModelBase
{
public:
    NestedCategory();
    virtual ~NestedCategory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NestedCategory members

    /// <summary>
    /// Whether the category is active
    /// </summary>
    bool getActive() const;
    void setActive(bool value);
    bool activeIsSet() const;
    void unsetActive();
    /// <summary>
    /// The id of the category
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
        /// <summary>
    /// The name of the category
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();

protected:
    bool m_Active;
    bool m_ActiveIsSet;
utility::string_t m_Id;
    utility::string_t m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* NestedCategory_H_ */
