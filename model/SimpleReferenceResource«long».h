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
 * SimpleReferenceResource«long».h
 *
 * 
 */

#ifndef SimpleReferenceResource«long»_H_
#define SimpleReferenceResource«long»_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SimpleReferenceResource«long»
    : public ModelBase
{
public:
    SimpleReferenceResource«long»();
    virtual ~SimpleReferenceResource«long»();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SimpleReferenceResource«long» members

    /// <summary>
    /// The id of the referenced object
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
        /// <summary>
    /// The name of the referenced object
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();

protected:
    int64_t m_Id;
    utility::string_t m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* SimpleReferenceResource«long»_H_ */
