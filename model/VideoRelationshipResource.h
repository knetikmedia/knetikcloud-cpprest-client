/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * VideoRelationshipResource.h
 *
 * 
 */

#ifndef VideoRelationshipResource_H_
#define VideoRelationshipResource_H_


#include "ModelBase.h"

#include "SimpleReferenceResource«long».h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  VideoRelationshipResource
    : public ModelBase
{
public:
    VideoRelationshipResource();
    virtual ~VideoRelationshipResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// VideoRelationshipResource members

    /// <summary>
    /// The owner of the relationship
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«long»> getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();
    void setFrom(std::shared_ptr<SimpleReferenceResource«long»> value);
    /// <summary>
    /// The id of the relationship
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// Details about the relationship such as type or other information. Max length 10 characters
    /// </summary>
    utility::string_t getRelationshipDetails() const;
        void setRelationshipDetails(utility::string_t value);
    /// <summary>
    /// The target of the relationship.
    /// </summary>
    std::shared_ptr<SimpleReferenceResource«long»> getTo() const;
        void setTo(std::shared_ptr<SimpleReferenceResource«long»> value);

protected:
    std::shared_ptr<SimpleReferenceResource«long»> m_From;
    bool m_FromIsSet;
    int64_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Relationship_details;
        std::shared_ptr<SimpleReferenceResource«long»> m_To;
    };

}
}
}
}

#endif /* VideoRelationshipResource_H_ */
