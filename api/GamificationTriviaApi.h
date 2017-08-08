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
 * GamificationTriviaApi.h
 *
 * 
 */

#ifndef GamificationTriviaApi_H_
#define GamificationTriviaApi_H_


#include "ApiClient.h"

#include "AnswerResource.h"
#include "Collection«string».h"
#include "DeltaResource.h"
#include "ImportJobResource.h"
#include "PageResource«ImportJobResource».h"
#include "PageResource«QuestionResource».h"
#include "PageResource«QuestionTemplateResource».h"
#include "QuestionResource.h"
#include "QuestionTemplateResource.h"
#include "Result.h"
#include "StringWrapper.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  GamificationTriviaApi
{
public:
    GamificationTriviaApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~GamificationTriviaApi();
    /// <summary>
    /// Add an answer to a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="questionId">The id of the question</param>/// <param name="answer">The new answer (optional)</param>
    pplx::task<std::shared_ptr<AnswerResource>> addQuestionAnswers(utility::string_t questionId, std::shared_ptr<AnswerResource> answer);
    /// <summary>
    /// Add a tag to a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the question</param>/// <param name="tag">The new tag (optional)</param>
    pplx::task<void> addQuestionTag(utility::string_t id, std::shared_ptr<StringWrapper> tag);
    /// <summary>
    /// Add a tag to a batch of questions
    /// </summary>
    /// <remarks>
    /// All questions that dont&#39;t have the tag and match filters will have it added. The returned number is the number of questions updated.
    /// </remarks>
    /// <param name="tag">The tag to add (optional)</param>/// <param name="filterSearch">Filter for documents whose question, answers or tags contains provided string (optional)</param>/// <param name="filterIdset">Filter for documents whose id is in the comma separated list provided (optional)</param>/// <param name="filterCategory">Filter for questions with specified category, by id (optional)</param>/// <param name="filterTag">Filter for questions with specified tag (optional)</param>/// <param name="filterTagset">Filter for questions with specified tags (separated by comma) (optional)</param>/// <param name="filterType">Filter for questions with specified type (optional)</param>/// <param name="filterPublished">Filter for questions currenctly published or not (optional)</param>/// <param name="filterImportId">Filter for questions from a specific import job (optional)</param>
    pplx::task<int32_t> addTagToQuestionsBatch(std::shared_ptr<StringWrapper> tag, utility::string_t filterSearch, utility::string_t filterIdset, utility::string_t filterCategory, utility::string_t filterTag, utility::string_t filterTagset, utility::string_t filterType, bool filterPublished, int64_t filterImportId);
    /// <summary>
    /// Create an import job
    /// </summary>
    /// <remarks>
    /// Set up a job to import a set of trivia questions from a cvs file at a remote url. the file will be validated asynchronously but will not be processed until started manually with the process endpoint.
    /// </remarks>
    /// <param name="request">The new import job (optional)</param>
    pplx::task<std::shared_ptr<ImportJobResource>> createImportJob(std::shared_ptr<ImportJobResource> request);
    /// <summary>
    /// Create a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="question">The new question (optional)</param>
    pplx::task<std::shared_ptr<QuestionResource>> createQuestion(std::shared_ptr<QuestionResource> question);
    /// <summary>
    /// Create a question template
    /// </summary>
    /// <remarks>
    /// Question templates define a type of question and the properties they have
    /// </remarks>
    /// <param name="questionTemplateResource">The question template resource object (optional)</param>
    pplx::task<std::shared_ptr<QuestionTemplateResource>> createQuestionTemplate(std::shared_ptr<QuestionTemplateResource> questionTemplateResource);
    /// <summary>
    /// Delete an import job
    /// </summary>
    /// <remarks>
    /// Also deletes all questions that were imported by it
    /// </remarks>
    /// <param name="id">The id of the job</param>
    pplx::task<void> deleteImportJob(int64_t id);
    /// <summary>
    /// Delete a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the question</param>
    pplx::task<void> deleteQuestion(utility::string_t id);
    /// <summary>
    /// Remove an answer from a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="questionId">The id of the question</param>/// <param name="id">The id of the answer</param>
    pplx::task<void> deleteQuestionAnswers(utility::string_t questionId, utility::string_t id);
    /// <summary>
    /// Delete a question template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteQuestionTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// Get an import job
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the job</param>
    pplx::task<std::shared_ptr<ImportJobResource>> getImportJob(int64_t id);
    /// <summary>
    /// Get a list of import job
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterVendor">Filter for jobs by vendor id (optional)</param>/// <param name="filterCategory">Filter for jobs by category id (optional)</param>/// <param name="filterName">Filter for jobs which name *STARTS* with the given string (optional)</param>/// <param name="filterStatus">Filter for jobs that are in a specific set of statuses (comma separated) (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«ImportJobResource»>> getImportJobs(utility::string_t filterVendor, utility::string_t filterCategory, utility::string_t filterName, utility::string_t filterStatus, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the question</param>
    pplx::task<std::shared_ptr<QuestionResource>> getQuestion(utility::string_t id);
    /// <summary>
    /// Get an answer for a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="questionId">The id of the question</param>/// <param name="id">The id of the answer</param>
    pplx::task<std::shared_ptr<AnswerResource>> getQuestionAnswer(utility::string_t questionId, utility::string_t id);
    /// <summary>
    /// List the answers available for a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="questionId">The id of the question</param>
    pplx::task<std::vector<std::shared_ptr<AnswerResource>>> getQuestionAnswers(utility::string_t questionId);
    /// <summary>
    /// List question deltas in ascending order of updated date
    /// </summary>
    /// <remarks>
    /// The &#39;since&#39; parameter is important to avoid getting a full list of all questions. Implementors should make sure they pass the updated date of the last resource loaded, not the date of the last request, in order to avoid gaps
    /// </remarks>
    /// <param name="since">Timestamp in seconds (optional)</param>
    pplx::task<std::vector<std::shared_ptr<DeltaResource>>> getQuestionDeltas(int64_t since);
    /// <summary>
    /// List the tags for a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the question</param>
    pplx::task<std::vector<utility::string_t>> getQuestionTags(utility::string_t id);
    /// <summary>
    /// Get a single question template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<QuestionTemplateResource>> getQuestionTemplate(utility::string_t id);
    /// <summary>
    /// List and search question templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«QuestionTemplateResource»>> getQuestionTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List and search questions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>/// <param name="filterSearch">Filter for documents whose question, answers or tags contains provided string (optional)</param>/// <param name="filterIdset">Filter for documents whose id is in the comma separated list provided (optional)</param>/// <param name="filterCategory">Filter for questions with specified category, by id (optional)</param>/// <param name="filterTagset">Filter for questions with specified tags (separated by comma) (optional)</param>/// <param name="filterTag">Filter for questions with specified tag (optional)</param>/// <param name="filterType">Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)</param>/// <param name="filterPublished">Filter for questions currenctly published or not (optional)</param>/// <param name="filterImportId">Filter for questions from a specific import job (optional)</param>
    pplx::task<std::shared_ptr<PageResource«QuestionResource»>> getQuestions(int32_t size, int32_t page, utility::string_t order, utility::string_t filterSearch, utility::string_t filterIdset, utility::string_t filterCategory, utility::string_t filterTagset, utility::string_t filterTag, utility::string_t filterType, bool filterPublished, int64_t filterImportId);
    /// <summary>
    /// Count questions based on filters
    /// </summary>
    /// <remarks>
    /// This is also provided by the list endpoint so you don&#39;t need to call this for pagination purposes
    /// </remarks>
    /// <param name="filterSearch">Filter for documents whose question, answers or tags contains provided string (optional)</param>/// <param name="filterIdset">Filter for documents whose id is in the comma separated list provided (optional)</param>/// <param name="filterCategory">Filter for questions with specified category, by id (optional)</param>/// <param name="filterTag">Filter for questions with specified tag (optional)</param>/// <param name="filterTagset">Filter for questions with specified tags (separated by comma) (optional)</param>/// <param name="filterType">Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)</param>/// <param name="filterPublished">Filter for questions currenctly published or not (optional)</param>
    pplx::task<int64_t> getQuestionsCount(utility::string_t filterSearch, utility::string_t filterIdset, utility::string_t filterCategory, utility::string_t filterTag, utility::string_t filterTagset, utility::string_t filterType, bool filterPublished);
    /// <summary>
    /// Start processing an import job
    /// </summary>
    /// <remarks>
    /// Will process the CSV file and add new questions asynchronously. The status of the job must be &#39;VALID&#39;.
    /// </remarks>
    /// <param name="id">The id of the job</param>/// <param name="publishNow">Whether the new questions should be published live immediately</param>
    pplx::task<std::shared_ptr<ImportJobResource>> processImportJob(int64_t id, bool publishNow);
    /// <summary>
    /// Remove a tag from a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the question</param>/// <param name="tag">The tag to remove</param>
    pplx::task<void> removeQuestionTag(utility::string_t id, utility::string_t tag);
    /// <summary>
    /// Remove a tag from a batch of questions
    /// </summary>
    /// <remarks>
    /// ll questions that have the tag and match filters will have it removed. The returned number is the number of questions updated.
    /// </remarks>
    /// <param name="tag">The tag to remove</param>/// <param name="filterSearch">Filter for documents whose question, answers or tags contains provided string (optional)</param>/// <param name="filterIdset">Filter for documents whose id is in the comma separated list provided (optional)</param>/// <param name="filterCategory">Filter for questions with specified category, by id (optional)</param>/// <param name="filterTag">Filter for questions with specified tag (optional)</param>/// <param name="filterTagset">Filter for questions with specified tags (separated by comma) (optional)</param>/// <param name="filterType">Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)</param>/// <param name="filterPublished">Filter for questions currenctly published or not (optional)</param>/// <param name="filterImportId">Filter for questions from a specific import job (optional)</param>
    pplx::task<int32_t> removeTagToQuestionsBatch(utility::string_t tag, utility::string_t filterSearch, utility::string_t filterIdset, utility::string_t filterCategory, utility::string_t filterTag, utility::string_t filterTagset, utility::string_t filterType, bool filterPublished, int64_t filterImportId);
    /// <summary>
    /// List and search tags by the beginning of the string
    /// </summary>
    /// <remarks>
    /// For performance reasons, search &amp; category filters are mutually exclusive. If category is specified, search filter will be ignored in order to do fast matches for typeahead.
    /// </remarks>
    /// <param name="filterSearch">Filter for tags starting with the given text (optional)</param>/// <param name="filterCategory">Filter for tags on questions from a specific category (optional)</param>/// <param name="filterImportId">Filter for tags on questions from a specific import job (optional)</param>
    pplx::task<std::shared_ptr<Collection«string»>> searchQuestionTags(utility::string_t filterSearch, utility::string_t filterCategory, int64_t filterImportId);
    /// <summary>
    /// Update an import job
    /// </summary>
    /// <remarks>
    /// Changes should be made before process is started for there to be any effect.
    /// </remarks>
    /// <param name="id">The id of the job</param>/// <param name="request">The updated job (optional)</param>
    pplx::task<std::shared_ptr<ImportJobResource>> updateImportJob(int64_t id, std::shared_ptr<ImportJobResource> request);
    /// <summary>
    /// Update a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the question</param>/// <param name="question">The updated question (optional)</param>
    pplx::task<std::shared_ptr<QuestionResource>> updateQuestion(utility::string_t id, std::shared_ptr<QuestionResource> question);
    /// <summary>
    /// Update an answer for a question
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="questionId">The id of the question</param>/// <param name="id">The id of the answer</param>/// <param name="answer">The updated answer (optional)</param>
    pplx::task<void> updateQuestionAnswer(utility::string_t questionId, utility::string_t id, std::shared_ptr<AnswerResource> answer);
    /// <summary>
    /// Update a question template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="questionTemplateResource">The question template resource object (optional)</param>
    pplx::task<std::shared_ptr<QuestionTemplateResource>> updateQuestionTemplate(utility::string_t id, std::shared_ptr<QuestionTemplateResource> questionTemplateResource);
    /// <summary>
    /// Bulk update questions
    /// </summary>
    /// <remarks>
    /// Will update all questions that match filters used (or all questions in system if no filters used). Body should match a question resource with only those properties you wish to set. Null values will be ignored. Returned number is how many were updated.
    /// </remarks>
    /// <param name="question">New values for a set of question fields (optional)</param>/// <param name="filterSearch">Filter for documents whose question, answers or tags contains provided string (optional)</param>/// <param name="filterIdset">Filter for documents whose id is in the comma separated list provided (optional)</param>/// <param name="filterCategory">Filter for questions with specified category, by id (optional)</param>/// <param name="filterTagset">Filter for questions with specified tags (separated by comma) (optional)</param>/// <param name="filterType">Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) (optional)</param>/// <param name="filterPublished">Filter for questions currenctly published or not (optional)</param>/// <param name="filterImportId">Filter for questions from a specific import job (optional)</param>
    pplx::task<int32_t> updateQuestionsInBulk(std::shared_ptr<QuestionResource> question, utility::string_t filterSearch, utility::string_t filterIdset, utility::string_t filterCategory, utility::string_t filterTagset, utility::string_t filterType, bool filterPublished, int64_t filterImportId);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* GamificationTriviaApi_H_ */

